#include "windefs.h"
#include <stdio.h>
#include <stdlib.h>
#include "process.hpp"
#include "dyn_data.hpp"
#include "psapi.h"
#include <iostream>
#include "..\RemoteMemoryOps.hpp"
using namespace std;
/*
// 枚举PEB.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//#include "PEB.h"
#include <iostream>

using namespace std;
#pragma once

#include <Windows.h>
#include <Strsafe.h>
#include <wchar.h>
#include <vector>


#define NT_SUCCESS(x) ((x) >= 0)

#define ProcessBasicInformation 0
typedef
NTSTATUS(WINAPI *pfnNtWow64QueryInformationProcess64)
(HANDLE ProcessHandle, UINT32 ProcessInformationClass,
	PVOID ProcessInformation, UINT32 ProcessInformationLength,
	UINT32* ReturnLength);

typedef
NTSTATUS(WINAPI *pfnNtWow64ReadVirtualMemory64)
(HANDLE ProcessHandle, PVOID64 BaseAddress,
	PVOID BufferData, UINT64 BufferLength,
	PUINT64 ReturnLength);

typedef
NTSTATUS(WINAPI *pfnNtQueryInformationProcess)
(HANDLE ProcessHandle, ULONG ProcessInformationClass,
	PVOID ProcessInformation, UINT32 ProcessInformationLength,
	UINT32* ReturnLength);

template <typename T>
struct _UNICODE_STRING_T
{
	WORD Length;
	WORD MaximumLength;
	T Buffer;
};

template <typename T>
struct _LIST_ENTRY_T
{
	T Flink;
	T Blink;
};

template <typename T, typename NGF, int A>
struct _PEB_T
{
	typedef T type;

	union
	{
		struct
		{
			BYTE InheritedAddressSpace;
			BYTE ReadImageFileExecOptions;
			BYTE BeingDebugged;
			BYTE BitField;
		};
		T dummy01;
	};
	T Mutant;
	T ImageBaseAddress;
	T Ldr;
	T ProcessParameters;
	T SubSystemData;
	T ProcessHeap;
	T FastPebLock;
	T AtlThunkSListPtr;
	T IFEOKey;
	T CrossProcessFlags;
	T UserSharedInfoPtr;
	DWORD SystemReserved;
	DWORD AtlThunkSListPtr32;
	T ApiSetMap;
	T TlsExpansionCounter;
	T TlsBitmap;
	DWORD TlsBitmapBits[2];
	T ReadOnlySharedMemoryBase;
	T HotpatchInformation;
	T ReadOnlyStaticServerData;
	T AnsiCodePageData;
	T OemCodePageData;
	T UnicodeCaseTableData;
	DWORD NumberOfProcessors;
	union
	{
		DWORD NtGlobalFlag;
		NGF dummy02;
	};
	LARGE_INTEGER CriticalSectionTimeout;
	T HeapSegmentReserve;
	T HeapSegmentCommit;
	T HeapDeCommitTotalFreeThreshold;
	T HeapDeCommitFreeBlockThreshold;
	DWORD NumberOfHeaps;
	DWORD MaximumNumberOfHeaps;
	T ProcessHeaps;
	T GdiSharedHandleTable;
	T ProcessStarterHelper;
	T GdiDCAttributeList;
	T LoaderLock;
	DWORD OSMajorVersion;
	DWORD OSMinorVersion;
	WORD OSBuildNumber;
	WORD OSCSDVersion;
	DWORD OSPlatformId;
	DWORD ImageSubsystem;
	DWORD ImageSubsystemMajorVersion;
	T ImageSubsystemMinorVersion;
	T ActiveProcessAffinityMask;
	T GdiHandleBuffer[A];
	T PostProcessInitRoutine;
	T TlsExpansionBitmap;
	DWORD TlsExpansionBitmapBits[32];
	T SessionId;
	ULARGE_INTEGER AppCompatFlags;
	ULARGE_INTEGER AppCompatFlagsUser;
	T pShimData;
	T AppCompatInfo;
	_UNICODE_STRING_T<T> CSDVersion;
	T ActivationContextData;
	T ProcessAssemblyStorageMap;
	T SystemDefaultActivationContextData;
	T SystemAssemblyStorageMap;
	T MinimumStackCommit;
	T FlsCallback;
	_LIST_ENTRY_T<T> FlsListHead;
	T FlsBitmap;
	DWORD FlsBitmapBits[4];
	T FlsHighIndex;
	T WerRegistrationData;
	T WerShipAssertPtr;
	T pContextData;
	T pImageHeaderHash;
	T TracingFlags;
	T CsrServerReadOnlySharedMemoryBase;
};

typedef _PEB_T<DWORD, DWORD64, 34> _PEB32;
typedef _PEB_T<DWORD64, DWORD, 30> _PEB64;

typedef struct _STRING_32
{
	WORD Length;
	WORD MaximumLength;
	UINT32 Buffer;
} STRING32, *PSTRING32;

typedef struct _STRING_64
{
	WORD Length;
	WORD MaximumLength;
	UINT64 Buffer;
} STRING64, *PSTRING64;

typedef struct _RTL_DRIVE_LETTER_CURDIR_32
{
	WORD Flags;
	WORD Length;
	ULONG TimeStamp;
	STRING32 DosPath;
} RTL_DRIVE_LETTER_CURDIR32, *PRTL_DRIVE_LETTER_CURDIR32;

typedef struct _RTL_DRIVE_LETTER_CURDIR_64
{
	WORD Flags;
	WORD Length;
	ULONG TimeStamp;
	STRING64 DosPath;
} RTL_DRIVE_LETTER_CURDIR64, *PRTL_DRIVE_LETTER_CURDIR64;

typedef struct _UNICODE_STRING_32
{
	WORD Length;
	WORD MaximumLength;
	UINT32 Buffer;
} UNICODE_STRING32, *PUNICODE_STRING32;

typedef struct _UNICODE_STRING_64
{
	WORD Length;
	WORD MaximumLength;
	UINT64 Buffer;
} UNICODE_STRING64, *PUNICODE_STRING64;


typedef struct _CURDIR_32
{
	UNICODE_STRING32 DosPath;
	UINT32 Handle;
} CURDIR32, *PCURDIR32;

typedef struct _RTL_USER_PROCESS_PARAMETERS_32
{
	ULONG MaximumLength;
	ULONG Length;
	ULONG Flags;
	ULONG DebugFlags;
	UINT32 ConsoleHandle;
	ULONG ConsoleFlags;
	UINT32 StandardInput;
	UINT32 StandardOutput;
	UINT32 StandardError;
	CURDIR32 CurrentDirectory;
	UNICODE_STRING32 DllPath;
	UNICODE_STRING32 ImagePathName;
	UNICODE_STRING32 CommandLine;
	UINT32 Environment;
	ULONG StartingX;
	ULONG StartingY;
	ULONG CountX;
	ULONG CountY;
	ULONG CountCharsX;
	ULONG CountCharsY;
	ULONG FillAttribute;
	ULONG WindowFlags;
	ULONG ShowWindowFlags;
	UNICODE_STRING32 WindowTitle;
	UNICODE_STRING32 DesktopInfo;
	UNICODE_STRING32 ShellInfo;
	UNICODE_STRING32 RuntimeData;
	RTL_DRIVE_LETTER_CURDIR32 CurrentDirectores[32];
	ULONG EnvironmentSize;
} RTL_USER_PROCESS_PARAMETERS32, *PRTL_USER_PROCESS_PARAMETERS32;


typedef struct _CURDIR_64
{
	UNICODE_STRING64 DosPath;
	UINT64 Handle;
} CURDIR64, *PCURDIR64;

typedef struct _RTL_USER_PROCESS_PARAMETERS_64
{
	ULONG MaximumLength;
	ULONG Length;
	ULONG Flags;
	ULONG DebugFlags;
	UINT64 ConsoleHandle;
	ULONG ConsoleFlags;
	UINT64 StandardInput;
	UINT64 StandardOutput;
	UINT64 StandardError;
	CURDIR64 CurrentDirectory;
	UNICODE_STRING64 DllPath;
	UNICODE_STRING64 ImagePathName;
	UNICODE_STRING64 CommandLine;
	UINT64 Environment;
	ULONG StartingX;
	ULONG StartingY;
	ULONG CountX;
	ULONG CountY;
	ULONG CountCharsX;
	ULONG CountCharsY;
	ULONG FillAttribute;
	ULONG WindowFlags;
	ULONG ShowWindowFlags;
	UNICODE_STRING64 WindowTitle;
	UNICODE_STRING64 DesktopInfo;
	UNICODE_STRING64 ShellInfo;
	UNICODE_STRING64 RuntimeData;
	RTL_DRIVE_LETTER_CURDIR64 CurrentDirectores[32];
	ULONG EnvironmentSize;
} RTL_USER_PROCESS_PARAMETERS64, *PRTL_USER_PROCESS_PARAMETERS64;



typedef struct _PROCESS_BASIC_INFORMATION64 {
	NTSTATUS ExitStatus;
	UINT32 Reserved0;
	UINT64 PebBaseAddress;
	UINT64 AffinityMask;
	UINT32 BasePriority;
	UINT32 Reserved1;
	UINT64 UniqueProcessId;
	UINT64 InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION64;

typedef struct _PROCESS_BASIC_INFORMATION32 {
	NTSTATUS ExitStatus;
	UINT32 PebBaseAddress;
	UINT32 AffinityMask;
	UINT32 BasePriority;
	UINT32 UniqueProcessId;
	UINT32 InheritedFromUniqueProcessId;
} PROCESS_BASIC_INFORMATION32;




int getget(DWORD PID)
{
	HANDLE m_ProcessHandle;
	//int PID;
	//cout << "输入PID：";
	//cin >> PID;

	m_ProcessHandle = OpenProcess(PROCESS_ALL_ACCESS, FALSE, PID);

	BOOL bSource = FALSE;
	BOOL bTarget = FALSE;
	//判断自己的位数
	IsWow64Process(GetCurrentProcess(), &bSource);
	//判断目标的位数
	IsWow64Process(m_ProcessHandle, &bTarget);

	if (bTarget == FALSE && bSource == TRUE)
	{
		HMODULE NtdllModule = GetModuleHandle(L"ntdll.dll");
		pfnNtWow64QueryInformationProcess64 NtWow64QueryInformationProcess64 = (pfnNtWow64QueryInformationProcess64)GetProcAddress(NtdllModule, "NtWow64QueryInformationProcess64");
		pfnNtWow64ReadVirtualMemory64 NtWow64ReadVirtualMemory64 = (pfnNtWow64ReadVirtualMemory64)GetProcAddress(NtdllModule, "NtWow64ReadVirtualMemory64");

		PROCESS_BASIC_INFORMATION64 pbi = { 0 };
		UINT64 ReturnLength = 0;

		NTSTATUS Status = NtWow64QueryInformationProcess64(m_ProcessHandle, ProcessBasicInformation, &pbi, (UINT32)sizeof(pbi), (UINT32*)&ReturnLength);

		if (NT_SUCCESS(Status))
		{

			_PEB64* Peb = (_PEB64*)malloc(sizeof(_PEB64));
			RTL_USER_PROCESS_PARAMETERS64* ProcessParameters = (RTL_USER_PROCESS_PARAMETERS64*)malloc(sizeof(RTL_USER_PROCESS_PARAMETERS64));
			Status = NtWow64ReadVirtualMemory64(m_ProcessHandle, (PVOID64)pbi.PebBaseAddress,
				(_PEB64*)Peb, sizeof(_PEB64), &ReturnLength);


			cout << "PebBaseAddress:" << hex << pbi.PebBaseAddress << endl;
			cout << "Ldr:" << hex << Peb->Ldr << endl;
			cout << "ImageBaseAddress:" << hex << Peb->ImageBaseAddress << endl;
		}
	}

	//自己是32  目标是32
	else if (bTarget == TRUE && bSource == TRUE)
	{
		HMODULE NtdllModule = GetModuleHandle(L"ntdll.dll");
		pfnNtQueryInformationProcess NtQueryInformationProcess = (pfnNtQueryInformationProcess)GetProcAddress(NtdllModule,
			"NtQueryInformationProcess");
		PROCESS_BASIC_INFORMATION32 pbi = { 0 };
		UINT32  ReturnLength = 0;
		NTSTATUS Status = NtQueryInformationProcess(m_ProcessHandle,
			ProcessBasicInformation, &pbi, (UINT32)sizeof(pbi), (UINT32*)&ReturnLength);
		if (NT_SUCCESS(Status))
		{
			_PEB32* Peb = (_PEB32*)malloc(sizeof(_PEB32));
			ReadProcessMemory(m_ProcessHandle, (PVOID)pbi.PebBaseAddress, (_PEB32*)Peb, sizeof(_PEB32), NULL);
			printf("PEB:%x\r\n", pbi.PebBaseAddress);
			printf("LdrAddress:%x\r\n", ((_PEB32*)Peb)->Ldr);
			printf("ImageBaseAddress:%x\r\n", ((_PEB32*)Peb)->ImageBaseAddress);
		}
	}




	return 0;
}
*/


typedef NTSTATUS(WINAPI *NtQueryInformationProcessPtr)(
	HANDLE processHandle,
	PROCESSINFOCLASS processInformationClass,
	PVOID processInformation,
	ULONG processInformationLength,
	PULONG returnLength);

LPCVOID getLoadAddress(DWORD dwProcessId)
{
	HANDLE hProcess = OpenProcess(PROCESS_QUERY_INFORMATION | PROCESS_VM_OPERATION | PROCESS_VM_READ | PROCESS_VM_WRITE, 0, dwProcessId);

	HMODULE hModule = LoadLibrary(TEXT("Ntdll.dll "));
	if (NULL == hModule)
		return NULL;

	PROCESS_BASIC_INFORMATION pbi = { 0 };
	NtQueryInformationProcessPtr NtQueryInformationProcess = (NtQueryInformationProcessPtr)GetProcAddress(hModule, "NtQueryInformationProcess");
	LONG status = NtQueryInformationProcess(hProcess, ProcessBasicInformation, (PVOID)&pbi, sizeof(PROCESS_BASIC_INFORMATION), NULL);
	if (NULL != hModule)
		FreeLibrary(hModule);

	if (NULL != hProcess)
		CloseHandle(hProcess);

	return pbi.PebBaseAddress->Reserved3[1];
}

int main(int argc, char* argv[])
{
	out = fopen("./_Kofw.dat2.log", "w");
	dyn_data::ensure_intel_cpu();
	dyn_data::load_information();
	HANDLE _hProcess=0;
	DWORD pid;
	//DWORD pid = atoi(argv[1]);
	//_hProcess = OpenProcess(PROCESS_QUERY_LIMITED_INFORMATION, FALSE, pid);
	//_hProcess = OpenProcess(PROCESS_QUERY_INFORMATION , 0, pid);
	HMODULE nHmodule[1024] = { NULL };
	DWORD cbNeeded = 0;
	_hProcess = ::FindWindow(NULL, TEXT("PLAYERUNKNOWN'S BATTLEGROUNDS "));
	DWORD idProcess = 0;
	
	if (!_hProcess)
	{
		CloseHandle(_hProcess);
		//::MessageBoxW(NULL, TEXT("很遗憾，你没有运行计算器"), TEXT("EnumProcessModules"), MB_OK);
	}
	else
	{
		BOOL bRetn = EnumProcessModules(_hProcess, nHmodule, sizeof(nHmodule), &cbNeeded);
		if (!bRetn)
		{
			CloseHandle(_hProcess);
			//::MessageBoxW(NULL, TEXT("很遗憾,获取模块句柄失败"), TEXT("EnumProcessModules"), MB_OK);

		}
		else
		{
			for (int i = 0; i<(cbNeeded / sizeof(HMODULE)); i++)
			{
				cout << nHmodule[i] << endl;
				cout << TEXT("**********************") << endl;
				cout << i << endl;
				cout << TEXT("======================") << endl;

			}
		}

	}
	
	//printf("%llx\n", getLoadAddress(pid));
	if (!_hProcess) CloseHandle(_hProcess);


	HandleGatewayServer handleGatewayServer;
	handleGatewayServer.Init();

	//getget(pid);
	pid = process::find(L"TslGame.exe");
	if (process::attach(pid)) {
		


		wchar_t buf[1024];
		PVOID  address=0;
		sscanf(argv[2], "%llx", &address);
		/*
		for (int i = 0; i < 200; i++)
		{
			address = PVOID (i * 1024);
			process::read(address, &buf, 1024);
			if (wcscmp(buf,L"windows")==0)
				printf("%x\n", address);
		}*/

		process::read(address, &buf, 1024);
		printf("%s\n", buf);
		printf("%ls\n", buf);
		process::detach();

	}
  return 0;
}