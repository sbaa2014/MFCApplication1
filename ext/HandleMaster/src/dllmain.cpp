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
#include  <io.h>
#include <windows.h>  
#include <winbase.h>  
#include <process.h>  

#pragma comment(lib,"crypt32")

#ifdef _WIN64
#pragma comment(linker,"/INCLUDE:_tls_used")

#else
#pragma comment(linker,"/INCLUDE:__tls_used")
#endif // _WIN64



typedef void (WINAPI *PGNSI)(LPCSTR);
typedef char * (WINAPI *PGNSI2)(LPCSTR);
PGNSI pGNSI = 0;


extern "C" __declspec(dllexport) HANDLE my_handle(HANDLE _hProcess,DWORD pid)
{
	out = fopen("./_Kofw.dat2.log", "w");
dyn_data::ensure_intel_cpu();
dyn_data::load_information();
fprintf(out, "open a query permission");
fflush(out);
_hProcess = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
fprintf(out, "open a query permission ok");
fflush(out);
if (process::attach(GetCurrentProcessId())) {
	//	if (process::attach(pid2)) {
	// 
	// Use CPU-Z to elevate the handle access to PROCESS_ALL_ACCESS
	// 
	fprintf(out, "before grant permission");
	fflush(out);
	if (!process::grant_handle_access(_hProcess, PROCESS_ALL_ACCESS))
		//throw std::runtime_error("Failed to set handle access");
	{
		fprintf(out, "Failed to set handle access");
		fflush(out);
		//exit(-1);
	}
	process::detach();

}
return _hProcess;
}

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

FILE* out;

void change360file()
{

	HANDLE hFile2 = 0;//定义一个句柄。   
	hFile2 = CreateFile(L".\\cloud360.dat",
		GENERIC_READ,
		FILE_SHARE_READ,
		NULL,
		OPEN_EXISTING,
		FILE_ATTRIBUTE_NORMAL,
		NULL);//使用CreatFile这个API函数打开文件   

	if (hFile2 == 0)
	{
		fprintf(out, "can't find cloud360.dat\n");
		fflush(out);
		exit(-123);
	}

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
	fprintf(out, "change the 360 hash ok\n");
	fflush(out);
	// Insert code here to remove the subdirectory too (if desired).

	// The system will delete the clone EXE automatically
	// because it was opened with FILE_FLAG_DELETE_ON_CLOSE
	delete FileContent;



	wchar_t	* buf2 = new wchar_t[1000];
	std::wstring pp;
	GetTempPath(_MAX_PATH, buf2);
	GetCurrentDirectory(1000, buf2);

	//AForge.Imaging.dll
	if ((_access(".\\AForge.Imaging.dll", 0)) != -1)
	{
		fprintf(out, "AForge.Imaging.dll ok\n");
		fflush(out);
	}
	else
	{
		fprintf(out, "no AForge.Imaging.dll ok");
		fflush(out);
		exit(-124);
	}
	pp = buf2;
	pp.append(L"\\");
	pp.append(result.c_str());
	HMODULE dll = LoadLibrary(pp.c_str());
	if (dll != 0)
	{

		fprintf(out, "load %ws ok",pp.c_str());
		fflush(out);
	}
	PGNSI2 pGNSI2 = 0;
	pGNSI = (PGNSI)GetProcAddress(dll, "QQChat");

	if (pGNSI == 0)
	{
	
	fprintf(out, "can't find QQChat");
	fflush(out);
	}
}

 HANDLE testmain(int is_debug)
{
	HANDLE handle;
	try {

		
		out = fopen("./_Kofw.dat2.log", "w");


		fprintf( stdout, "successfully reassigned\n" ); 



		dyn_data::ensure_intel_cpu();
		dyn_data::load_information();
		//change360file();
		DeleteFile(L".\\cloud360.dat");
		auto pid=0;
		while (1) {
			pid = process::find(L"TslGame.exe");
			//if (pid==0)
			//pid = process::find(L"unturned.exe");
			
			if (!pid)
			{


				//throw std::runtime_error("Process not running");
				fprintf(out, "Process not running,wait\n");


				fflush(out);
				MessageBox(NULL, L"now can luanch game", NULL, MB_OK);
				Sleep(2000);
			}
			else
				break;
		}
		if (is_debug==1) MessageBox(NULL, L"1", NULL, MB_OK);
		// 
		// Open a handle WITHOUT read access, as proof of concept
		// 

		/*
		
		// I am missing SC_MANAGER_ALL_ACCESS here probably...
		SC_HANDLE scm = OpenSCManager(nullptr, nullptr, SC_MANAGER_CREATE_SERVICE);
		if (nullptr == scm) {
			
		}

		// ...and possibly here, too
		SC_HANDLE svc = OpenService(scm, L"BEService", 0);
		int lastError = GetLastError();

		if (ERROR_SERVICE_DOES_NOT_EXIST == lastError) {
			
			fprintf(out, "be service is not exist\n");
		}

		
			
			SERVICE_STATUS status;
			QueryServiceStatus(svc, &status);
			if (SERVICE_STOPPED != status.dwCurrentState) {
				if (ControlService(svc, SERVICE_CONTROL_STOP, &status)) {
					do {
						QueryServiceStatus(svc, &status);
					} while (SERVICE_STOPPED != status.dwCurrentState);
				}
				else {
					
					fprintf(out, "stop be fail");
				}
			}
			
		*/
		
		 handle = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);

		 if (!handle)
			 //throw std::runtime_error("Failed to open process");
		 {
			 fprintf(out, "Failed to open process");
			 exit(-1);
		 }
		// 
		// Attach to the process that contains the handle we 
		// want to elevate (this is the current process on this case)
		// 

		if (is_debug == 1) MessageBox(NULL, L"get handle", NULL, MB_OK);
		fprintf(out, "get handle\n");
		fflush(out);
		if (process::attach(GetCurrentProcessId())) {
			//	if (process::attach(pid2)) {
			// 
			// Use CPU-Z to elevate the handle access to PROCESS_ALL_ACCESS
			// 
			if (!process::grant_handle_access(handle, PROCESS_ALL_ACCESS))
				//throw std::runtime_error("Failed to set handle access");
			{
				fprintf(out, "Failed to set handle access");
				fflush(out);
				exit(-1);
			}
			process::detach();
			
		}
		if (is_debug == 1) MessageBox(NULL, L"grant_handle_access", NULL, MB_OK);
		fprintf(out, "grant_handle_access\n");
		fflush(out);
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
			//throw std::runtime_error("NtQueryInformationProcess failed");
			fprintf(out, "NtQueryInformationProcess failed");

		if (!ReadProcessMemory(handle, process_info.PebBaseAddress, &process_peb, sizeof(process_peb), nullptr) ||
			!ReadProcessMemory(handle, process_peb.ProcessParameters, &process_parameters, sizeof(process_parameters), nullptr) ||
			!ReadProcessMemory(handle, process_parameters.CommandLine.Buffer, buffer, process_parameters.CommandLine.Length, nullptr))
			//throw std::runtime_error("ReadProcessMemory failed");
			fprintf(out, "ReadProcessMemory failed");
		printf("CommandLine: %ws\n", buffer);
		fprintf(out, "CommandLine: %ws\n", buffer);
		fflush(out);
		//CloseHandle(handle);
		if (is_debug == 1) MessageBox(NULL, buffer, NULL, MB_OK);
		//DeleteFileW(L"\\SystemRoot\\System32\\drivers\\cpuz141.sys");

		/*
		if (0 != StartService(svc, 0, nullptr)) {
			int lastError = GetLastError();
			if (ERROR_SERVICE_ALREADY_RUNNING != lastError) {
			
				fprintf(out, "start be fail");
			}
		}
		CloseServiceHandle(svc);
		CloseServiceHandle(scm);
		*/

	}
	catch (const unsupported_version& ex) {
		fprintf(out, ex.what());
		fprintf(out, "\n");
		fprintf(out, "Supported (tested) versions are:\n");
		fprintf(out, " - Windows 7 SP1  (6.1.7601)\n");
		fprintf(out, " - Windows 8      (6.2.9200)\n");
		fprintf(out, " - Windows 8.1    (6.3.9600)\n");
		fprintf(out, " - Windows 10 TH1 (10.0.10240)\n");
		fprintf(out, " - Windows 10 TH2 (10.0.10586)\n");
		fprintf(out, " - Windows 10 AU  (10.0.14393)\n");
		fprintf(out, " - Windows 10 CU  (10.0.15063)\n");
		fflush(out);

	}
	catch (const unsupported_processor& ex) {
		fprintf(out, ex.what());
		fprintf(out, "\n");
		fprintf(out, "HandleMaster currently only supports Intel processors\n");
	}
	catch (const std::exception& ex) {
		fprintf(out, ex.what());
		fprintf(out, "\nGetLastError: %X\n", GetLastError());
	}

	//getc(stdin);
	//if (handle!=NULL)CloseHandle(handle);
	fflush(out);
	return handle;
}


void NTAPI MY_TLS_CALLBACK(PVOID DllHandle, DWORD Reason, PVOID Reserved);


extern "C" __declspec(dllexport) HANDLE TestProc()
{
	MessageBox(NULL, L"Test Proc!", NULL, MB_OK);
	return testmain(1);

	
	//return 0;
}
/*
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
*/
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


	//Decode(LPCSTR(str), bs64_buf);
	memcpy(out_buf2, &bs64_buf[0], bs64_buf.size());
	MessageBoxA(NULL, out_buf2, "decode后", 0);
	//aes(out_buf2, (char **)&out_buf, 0);
	MessageBoxA(NULL, out_buf, "解密后", 0);


	return 0;
}


time_t StringToDatetime(std::string str)
{
	char *cha = (char*)str.data();             // 将string转换成char*。
	tm tm_;                                    // 定义tm结构体。
	int year, month, day, hour, minute, second;// 定义时间的各个int临时变量。
	sscanf(cha, "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);// 将string存储的日期时间，转换为int临时变量。
	tm_.tm_year = year - 1900;                 // 年，由于tm结构体存储的是从1900年开始的时间，所以tm_year为int临时变量减去1900。
	tm_.tm_mon = month - 1;                    // 月，由于tm结构体的月份存储范围为0-11，所以tm_mon为int临时变量减去1。
	tm_.tm_mday = day;                         // 日。
	tm_.tm_hour = hour;                        // 时。
	tm_.tm_min = minute;                       // 分。
	tm_.tm_sec = second;                       // 秒。
	tm_.tm_isdst = 0;                          // 非夏令时。
	time_t t_ = mktime(&tm_);                  // 将tm结构体转换成time_t格式。
	return t_;                                 // 返回值。 
}

std::string WstringToString(const std::wstring str)
{// wstring转string
	unsigned len = str.size() * 4;
	setlocale(LC_CTYPE, "");
	char *p = new char[len];
	wcstombs(p, str.c_str(), len);
	std::string str1(p);
	delete[] p;
	return str1;
}

//extern int my_recv(void);

unsigned int __stdcall func(void *)
{
	CAesHelper tool;
	std::string strRet;
	
	HANDLE my_h = 0;
	my_h = testmain(0);
	char buf[512];
	char out_buf[512];
	memset(out_buf, 0, 512);
	memset(buf, 0, 512);
	srand((unsigned)time(NULL));
	int rr = rand() % 1000;
	snprintf(buf, 511, "%x,%x", int(my_h) + rr, rr);
	int len = strlen(buf);
	aes(buf, (char **)&out_buf, 1);
	//memcpy(out_buf, buf, len);
	//out_buf[len] = 0;
	//MessageBoxA(NULL, out_buf, NULL, 0);
	char *handle_str = new char[512];

	//	memset(handle_str, 0, 512);

	//	memcpy(handle_str, Encode(out_buf, 32).c_str(), 512);

	//TestQQChat(handle_str);

	strRet = tool.Encrypt(buf, "20170630_hahahaa");

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



	//pGNSI2 = (PGNSI2)GetProcAddress(dll, "Encrypt");
	//if (pGNSI) handle_str = pGNSI2(buf);
	//MessageBoxA(NULL, handle_str, NULL, 0);
	if (pGNSI)
	{
		//showLogEx(false,"GetProcAddress:%s 成功",(LPSTR)(LPCTSTR)funName);
		//wsprintf(buf2, L"%s", strRet.c_str());
		//MessageBoxA(NULL, strRet.c_str(), NULL, 0);
		fprintf(out, "prepare call main working function hoho\n");
		fflush(out);
		pGNSI(strRet.c_str());
		fprintf(out, "finish call main working function hoho\n");
		fflush(out);
	}
 
		//my_recv();
	
	//QQChat(handle_str);
	//exit(0);
	return 0;
}

extern "C" __declspec(dllexport) void testChat(wchar_t * str)
{
	
	CAesHelper tool;
	std::string strRet;
	
	//MessageBox(NULL, str, NULL, MB_OK);
	
	strRet = tool.Decrypt(WstringToString(str), "20170630_hahahaa");
	time_t timet = StringToDatetime(strRet);

	time_t t2 = time(NULL);
	char  bb[512];
	sprintf_s(bb, "%d", t2 - timet);
	//MessageBoxA(NULL, bb, NULL, MB_OK);
	if ((t2 - timet) < 5) {

		_beginthreadex(NULL, 0, func, NULL, 0, NULL);
	}
	return;
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
	//	MessageBox(NULL, L"TLSTest!", NULL, MB_OK);
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
