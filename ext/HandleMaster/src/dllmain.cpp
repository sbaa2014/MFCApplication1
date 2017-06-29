// dllmain.cpp : 定义 DLL 应用程序的入口点。
//#include "stdafx.h"
#include "windefs.h"
#include <stdio.h>
#include <stdlib.h>
#include "time.h"
#include "process.hpp"
#include "dyn_data.hpp"
#include <wincrypt.h>
#include <vector>
#include "..\..\AES_Test\AES_Test\AES_Test\AES_Test\AesHelper.h"
#include <random>
#include <string>


#pragma comment(lib,"crypt32")

#ifdef _WIN64
#pragma comment(linker,"/INCLUDE:_tls_used")

#else
#pragma comment(linker,"/INCLUDE:__tls_used")
#endif // _WIN64



void aes(char * buf, char ** out_buf, int encrypt)
{
	WCHAR szPasswod[] = { L"20170630_haha" };
	HCRYPTHASH hHash;
	HCRYPTPROV hCryptProv;
	HCRYPTKEY    hKey;

	DWORD dwHashLen = 0;
	DWORD dwhash = 4;
	BYTE byHash[] = { "123456789012345678" };
	BYTE bySrc[] = { "123456789012345678901234567890" };
	BYTE byDest[64] = { 0 };
	//memcpy(byDest, bySrc, 32);
	memcpy(byDest, buf, 32);
	int iret = -1;
	int idx = 0;
	WCHAR* wszProvider[] = { MS_ENH_RSA_AES_PROV,L"Microsoft Enhanced RSA and AES Cryptographic Provider (Prototype)" };

	while (!(iret = CryptAcquireContext(&hCryptProv, NULL, wszProvider[idx], PROV_RSA_AES, CRYPT_SILENT)))
	{
		idx++;
		idx %= 2;
	}

	// passwd to hash 
	CryptCreateHash(hCryptProv, CALG_MD5, 0, 0, &hHash);
	// use passwd to create hash 
	CryptHashData(hHash,(BYTE*)szPasswod,wcslen(szPasswod)*2,0);

	// set hash 
	CryptGetHashParam(hHash, HP_HASHSIZE, (BYTE*)&dwHashLen, &dwhash, 0); // hashlen = 16 
	CryptSetHashParam(hHash, HP_HASHVAL, byHash, dwHashLen);

	CryptDeriveKey(hCryptProv, CALG_AES_128, hHash, CRYPT_EXPORTABLE, &hKey); // CRYPT_EXPORTABLE

	DWORD dwLen = 31;
	DWORD dwLen1 = 31;
	DWORD dwBufferLen = 48;
	//get crypt need buffer-len 
	CryptEncrypt(hKey, 0, TRUE, 0, byDest, &dwLen, 0);
	// alloc buffer that`s len should be dwlen 
	if (encrypt == 1)

		CryptEncrypt(hKey, 0, TRUE, 0, byDest, &dwLen1, dwLen);

	else
		//MessageBoxA(NULL, (LPSTR)byDest, (LPSTR)byDest, 0);
		CryptDecrypt(hKey, 0, TRUE, 0, byDest, &dwLen);
	//MessageBoxA(NULL, (LPSTR)byDest, (LPSTR)byDest, 0);
	memcpy(out_buf, byDest, 32);

	CryptDestroyHash(hHash);
	CryptDestroyKey(hKey);
	CryptReleaseContext(hCryptProv, 0);
}

 HANDLE testmain(int is_debug)
{
	HANDLE handle;
	try {
		dyn_data::ensure_intel_cpu();
		dyn_data::load_information();

		auto pid = process::find(L"TslGame.exe");

		if (!pid)
			//throw std::runtime_error("Process not running");
		fprintf(stderr, "Process not running\n");

		if (is_debug==1) MessageBox(NULL, L"1", NULL, MB_OK);
		// 
		// Open a handle WITHOUT read access, as proof of concept
		// 
		 handle = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);

		if (!handle)
			throw std::runtime_error("Failed to open process");

		// 
		// Attach to the process that contains the handle we 
		// want to elevate (this is the current process on this case)
		// 

		if (is_debug == 1) MessageBox(NULL, L"get handle", NULL, MB_OK);

		if (process::attach(GetCurrentProcessId())) {
			//	if (process::attach(pid2)) {
			// 
			// Use CPU-Z to elevate the handle access to PROCESS_ALL_ACCESS
			// 
			if (!process::grant_handle_access(handle, PROCESS_ALL_ACCESS))
				throw std::runtime_error("Failed to set handle access");

			process::detach();
		}
		if (is_debug == 1) MessageBox(NULL, L"grant_handle_access", NULL, MB_OK);
		// 
		// Use the now elevated handle to perform a query and some reads.
		// You can use this handle for pretty much anything you want from now on. :)
		// 
		ULONG return_len;
		PEB   process_peb;
		PROCESS_BASIC_INFORMATION process_info;
		RTL_USER_PROCESS_PARAMETERS process_parameters;
		WCHAR buffer[512];
		memset(buffer, 0, sizeof(buffer));
		if (NtQueryInformationProcess(handle, ProcessBasicInformation, &process_info, sizeof(process_info), &return_len) < 0)
			throw std::runtime_error("NtQueryInformationProcess failed");

		if (!ReadProcessMemory(handle, process_info.PebBaseAddress, &process_peb, sizeof(process_peb), nullptr) ||
			!ReadProcessMemory(handle, process_peb.ProcessParameters, &process_parameters, sizeof(process_parameters), nullptr) ||
			!ReadProcessMemory(handle, process_parameters.CommandLine.Buffer, buffer, process_parameters.CommandLine.Length, nullptr))
			throw std::runtime_error("ReadProcessMemory failed");

		printf("CommandLine: %ws\n", buffer);

		//CloseHandle(handle);
		if (is_debug == 1) MessageBox(NULL, buffer, NULL, MB_OK);
		//DeleteFileW(L"\\SystemRoot\\System32\\drivers\\cpuz141.sys");
	}
	catch (const unsupported_version& ex) {
		fprintf(stderr, ex.what());
		fprintf(stderr, "\n");
		fprintf(stderr, "Supported (tested) versions are:\n");
		fprintf(stderr, " - Windows 7 SP1  (6.1.7601)\n");
		fprintf(stderr, " - Windows 8      (6.2.9200)\n");
		fprintf(stderr, " - Windows 8.1    (6.3.9600)\n");
		fprintf(stderr, " - Windows 10 TH1 (10.0.10240)\n");
		fprintf(stderr, " - Windows 10 TH2 (10.0.10586)\n");
		fprintf(stderr, " - Windows 10 AU  (10.0.14393)\n");
		fprintf(stderr, " - Windows 10 CU  (10.0.15063)\n");

	}
	catch (const unsupported_processor& ex) {
		fprintf(stderr, ex.what());
		fprintf(stderr, "\n");
		fprintf(stderr, "HandleMaster currently only supports Intel processors\n");
	}
	catch (const std::exception& ex) {
		fprintf(stderr, ex.what());
		fprintf(stderr, "\nGetLastError: %X\n", GetLastError());
	}

	//getc(stdin);
	//if (handle!=NULL)CloseHandle(handle);
	return handle;
}


void NTAPI MY_TLS_CALLBACK(PVOID DllHandle, DWORD Reason, PVOID Reserved);


extern "C" __declspec(dllexport) HANDLE TestProc()
{
	MessageBox(NULL, L"Test Proc!", NULL, MB_OK);
	return testmain(1);

	
	//return 0;
}

static std::string Encode(const void* pBuffer, DWORD nSize)
{
	DWORD   nNeed = 0;
	CryptBinaryToStringA((const BYTE*)pBuffer, nSize, CRYPT_STRING_BASE64, NULL, &nNeed);

	std::string s;
	std::vector<char>   buf(nNeed);
	if (nNeed)
	{
		
		CryptBinaryToStringA((const BYTE*)pBuffer, nSize, CRYPT_STRING_BASE64, &buf[0], &nNeed);
		s = &buf[0];
	}
	s.append("\r\n"); // default will add CR/LF
	return s;
}

static void Decode(const char* sBase64, std::vector<BYTE>& decoded_data)
{
	decoded_data.clear();

	if (sBase64)
	{
		DWORD   nNeed = 0;
		CryptStringToBinaryA(sBase64, 0, CRYPT_STRING_BASE64, NULL, &nNeed, NULL, NULL);
		if (nNeed)
		{
			decoded_data.resize(nNeed);
			CryptStringToBinaryA(sBase64, 0, CRYPT_STRING_BASE64, &decoded_data[0], &nNeed, NULL, NULL);
		}
	}
}

extern "C" __declspec(dllexport) HANDLE TestQQChat(char * str)
{
	HANDLE my_h;
//	char * str;
	std::vector<BYTE> bs64_buf;
	char out_buf[512];
	char out_buf2[512];
	//str= testChat();
	MessageBoxA(NULL, LPCSTR(str), "加密串", 0);
	memset(out_buf2, 0, 512);


	Decode(LPCSTR(str), bs64_buf);
	memcpy(out_buf2, &bs64_buf[0], bs64_buf.size());
	MessageBoxA(NULL, out_buf2, "decode后", 0);
	aes(out_buf2, (char **)&out_buf, 0);
	MessageBoxA(NULL, out_buf, "解密后", 0);


	return 0;
}

typedef void (WINAPI *PGNSI)(LPCSTR );
typedef char * (WINAPI *PGNSI2)(LPCSTR );


extern "C" __declspec(dllexport) void testChat()
{
	//MessageBox(NULL, L"Test Proc!", NULL, MB_OK);
	HANDLE my_h=0; 
	my_h = testmain(0);
	char buf[512];
	char out_buf[512];
	memset(out_buf, 0, 512);
	memset(buf, 0, 512);
	srand((unsigned)time(NULL));
	int rr=rand() % 1000;
	snprintf(buf, 511, "%x,%x", int(my_h)+rr,rr);
	int len = strlen(buf);
	aes(buf, (char **)&out_buf, 1);
	//memcpy(out_buf, buf, len);
	//out_buf[len] = 0;
	//MessageBoxA(NULL, out_buf, NULL, 0);
	char *handle_str = new char[512];
	
	memset(handle_str, 0, 512);
	
	memcpy(handle_str, Encode(out_buf, 32).c_str(), 512);
	
	//TestQQChat(handle_str);
	CAesHelper tool;
	std::string strRet = tool.Encrypt(buf, "20170630_hahahaa");
	
	/*
	HANDLE hFile2;
	hFile2 = CreateFile(L"./h.txt",
	GENERIC_WRITE,
	FILE_SHARE_WRITE,
	NULL,
	CREATE_ALWAYS,
	FILE_ATTRIBUTE_NORMAL,
	NULL);//使用CreatFile这个API函数打开文件
	DWORD Written;
	WriteFile(hFile2, handle_str, strlen(strRet.c_str()), &Written, NULL);//写入文件
	CloseHandle(hFile2);//关闭句柄
	*/
	

	//MessageBoxA(NULL, strRet.c_str(), NULL, 0);

	HANDLE hFile2;//定义一个句柄。   
	hFile2 = CreateFile(L".\\cloud360.dat",
		GENERIC_READ,
		FILE_SHARE_READ,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);//使用CreatFile这个API函数打开文件   
	DWORD dwDataLen;
	char * FileContent = new char[30 * 1024 * 1024];
	ReadFile(hFile2, FileContent, 30 * 1024 * 1024, &dwDataLen, NULL);//读取数据   
	FileContent[dwDataLen] = 0;//将数组未尾设零。   
	CloseHandle(hFile2);//关闭句柄   
	srand((unsigned)time(NULL));
	if (strncmp(FileContent + dwDataLen - 630, "199131", 6) == 0)
	{
		//rewrite 1024

		for (int i = 1024; i > 0; i--)
			FileContent[dwDataLen - i] = rand() % 256;
		FileContent[dwDataLen - 630] = '1';
		FileContent[dwDataLen - 630 + 1] = '9';
		FileContent[dwDataLen - 630 + 2] = '9';
		FileContent[dwDataLen - 630 + 3] = '1';
		FileContent[dwDataLen - 630 + 4] = '3';
		FileContent[dwDataLen - 630 + 5] = '1';

	}
	else
	{
		//add 1024
		dwDataLen = dwDataLen + 1024;
		for (int i = 1024; i > 0; i--)
			FileContent[dwDataLen - i] = rand() % 256;
		FileContent[dwDataLen - 630] = '1';
		FileContent[dwDataLen - 630 + 1] = '9';
		FileContent[dwDataLen - 630 + 2] = '9';
		FileContent[dwDataLen - 630 + 3] = '1';
		FileContent[dwDataLen - 630 + 4] = '3';
		FileContent[dwDataLen - 630 + 5] = '1';

	}

	// 写入文件   
	//HANDLE hFile;//定义一个句柄。   



	static const wchar_t alphabet[] = L"ABCDEFGHIJKLMNOPQRSTUVWXYZbcdefghijklmnopqrstuvwxyz1234567890";
	static std::random_device rd;
	static std::uniform_int_distribution<> dist(0, ARRAYSIZE(alphabet) - 2);
	static std::uniform_int_distribution<> dist_len(5, 15);
	std::wstring result;

	// Get random string length
	int length = 0;
	if (length == 0)
		length = dist_len(rd);

	for (int i = 0; i < length; i++)
		result.push_back(alphabet[dist(rd)]);



	result.append(L".dat");


	hFile2 = CreateFile(result.c_str(),
		GENERIC_WRITE,
		FILE_SHARE_WRITE,
		NULL,
		CREATE_NEW,
		FILE_ATTRIBUTE_NORMAL,
		NULL);//使用CreatFile这个API函数打开文件   
	DWORD Written;
	WriteFile(hFile2, FileContent, dwDataLen, &Written, NULL);//写入文件   
	CloseHandle(hFile2);//关闭句柄
	DeleteFile(L".\\cloud360.dat");
	// Insert code here to remove the subdirectory too (if desired).

	// The system will delete the clone EXE automatically
	// because it was opened with FILE_FLAG_DELETE_ON_CLOSE
	delete FileContent;



wchar_t	* buf2=new wchar_t[1000];
	std::wstring pp;
	GetTempPath(_MAX_PATH, buf2);
	GetCurrentDirectory(1000, buf2);
	pp = buf2;
	pp.append(L"\\");
	pp.append(result.c_str());
	HMODULE dll = LoadLibrary(pp.c_str());
	PGNSI pGNSI=0;
	PGNSI2 pGNSI2=0;
	pGNSI =(PGNSI) GetProcAddress(dll, "QQChat");
	//pGNSI2 = (PGNSI2)GetProcAddress(dll, "Encrypt");
	//if (pGNSI) handle_str = pGNSI2(buf);
	//MessageBoxA(NULL, handle_str, NULL, 0);
	if (pGNSI)
	{
		//showLogEx(false,"GetProcAddress:%s 成功",(LPSTR)(LPCTSTR)funName);
		//wsprintf(buf2, L"%s", strRet.c_str());
		//MessageBoxA(NULL, strRet.c_str(), NULL, 0);
		pGNSI(strRet.c_str());
	}
	

	//QQChat(handle_str);

	return ;
}


/*
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
	{
		MessageBox(NULL, L"Load!", NULL, MB_OK);
		break;
	}
	case DLL_THREAD_ATTACH:
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
	{
		MessageBox(NULL, L"UnLoad!", NULL, MB_OK);
		break;
	}
		break;
	}
	return TRUE;
}
*/
//TLS回调函数测试
void NTAPI MY_TLS_CALLBACK(PVOID DllHandle, DWORD Reason, PVOID Reserved)
{
	if (Reason == DLL_PROCESS_ATTACH)
	{
		MessageBox(NULL, L"TLSTest!", NULL, MB_OK);
	}
}

extern "C"
#ifdef _WIN64
#pragma const_seg(".CRT$XLX")
const
#else
#pragma data_seg(".CRT$XLX")
#endif
PIMAGE_TLS_CALLBACK pTLS_CALLBACKs[] = { MY_TLS_CALLBACK,0 };
#pragma data_seg()
#pragma const_seg()
