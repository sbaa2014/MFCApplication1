// BeepHook.cpp : Defines the exported functions for the DLL application.
//

#include "stdafx.h"

#include <string>
#include <iostream>
#include <Windows.h>
#include <string>
#include <wincrypt.h>
#include <vector>
#include "..\..\AES_Test\AES_Test\AES_Test\AES_Test\AesHelper.h"
#include "time.h"
#include <windows.h>  
#include <winbase.h>  
#include <process.h> 

FILE* out;
HANDLE game_handle = 0;
static DWORD dwID=0;
extern int my_recv(void);
static HANDLE(WINAPI * TrueOpenProcess)(
	_In_ DWORD dwDesiredAccess,
	_In_ BOOL  bInheritHandle,
	_In_ DWORD dwProcessId
	) = OpenProcess;
// Detour function that replaces the Sleep API.  
HANDLE WINAPI myOpenProcessHook(
	_In_ DWORD dwDesiredAccess,
	_In_ BOOL  bInheritHandle,
	_In_ DWORD dwProcessId
) {
	HANDLE h;
	if (dwProcessId == dwID) {
		h = TrueOpenProcess(PROCESS_VM_READ | PROCESS_VM_WRITE | PROCESS_QUERY_INFORMATION, bInheritHandle, dwProcessId);
		WCHAR szBuffer[100];
		//===============do what you want here===================
		wsprintfW(szBuffer, L"Hooked Game Handle = %d", h);
		MessageBox(NULL, szBuffer, L"hook", MB_OK);
		//=======================================================
		DetourTransactionBegin();
		DetourUpdateThread(GetCurrentThread());
		//unhook
		DetourDetach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
		DetourDetach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
		DetourDetach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
		DetourDetach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
		DetourTransactionCommit();
		game_handle = h;
		fprintf(out, "get game process%d\n", h);
		fflush(out);
		h = 0;
	}
	else {
		h = TrueOpenProcess(dwDesiredAccess, bInheritHandle, dwProcessId);
		WCHAR szBuffer[100];
		wsprintfW(szBuffer, L"Hooked Handle = %d", dwProcessId);
		
		//MessageBox(NULL, szBuffer, L"hook", MB_OK);	
	}

	return h;
}

extern "C" __declspec(dllexport) BOOL DeepScan() {
	//MessageBox(NULL, L"dll attached via process", L"h", MB_OK);
	HWND sa = FindWindowW(NULL, L"PLAYERUNKNOWN'S BATTLEGROUNDS ");
	GetWindowThreadProcessId(sa, &dwID);

	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
	DetourTransactionCommit();
	return 0;
}

bool GetPid() {
	//bool ret = true;
	HWND sa = FindWindowW(NULL, L"PLAYERUNKNOWN'S BATTLEGROUNDS ");
	if (sa == NULL) {
		return false;
	}
	GetWindowThreadProcessId(sa, &dwID);
	if (dwID == NULL || dwID == 999999) {
		return false;
	}
	/*WCHAR szBuffer[100];
	wsprintfW(szBuffer, L"Game Pid = %d", dwID);
	MessageBox(NULL, szBuffer, L"h", MB_OK);*/
	return true;
}

unsigned int __stdcall func(void *)
{
	
	DetourRestoreAfterWith();
	DetourTransactionBegin();
	DetourUpdateThread(GetCurrentThread());
	DetourAttach(&(PVOID&)TrueOpenProcess, myOpenProcessHook);
	DetourTransactionCommit();

	while (!GetPid()) {
		Sleep(500);
	}
	WCHAR szBuffer[100];
	wsprintfW(szBuffer, L"Game Pid = %d", dwID);
	MessageBox(NULL, szBuffer, L"h", MB_OK);


	fprintf(out, "find game process\n");
	fflush(out);
	
	fprintf(out, "go recv\n");
	fflush(out);
	my_recv();
	return 0;
}


time_t StringToDatetime(std::string str)
{
	char *cha = (char*)str.data();             // 将string转换成char*。
	tm tm_;                                    // 定义tm结构体。
	int year, month, day, hour, minute, second;// 定义时间的各个int临时变量。
	sscanf_s(cha, "%d-%d-%d %d:%d:%d", &year, &month, &day, &hour, &minute, &second);// 将string存储的日期时间，转换为int临时变量。
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


extern "C" __declspec(dllexport) void testChat(wchar_t * str)
{

	CAesHelper tool;
	std::string strRet;

	//MessageBox(NULL, str, NULL, MB_OK);
	out = fopen("./_Kofw.dat2.log", "w");
	strRet = tool.Decrypt(WstringToString(str), "20170630_hahahaa");
	time_t timet = StringToDatetime(strRet);

	time_t t2 = time(NULL);
	char  bb[512];
	sprintf_s(bb, "%d", t2 - timet);
	//MessageBoxA(NULL, bb, NULL, MB_OK);
	if ((t2 - timet) < 30) {

		_beginthreadex(NULL, 0, func, NULL, 0, NULL);
		fprintf(out, "begin thread\n");
		fflush(out);
	}
	return;
}

