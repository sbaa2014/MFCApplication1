#include <stdio.h>  
#include <stdlib.h>  
#include <malloc.h>  
#include <windows.h>  

/************************************************************************
*                                                                      *
*                               Macro                                  *
*                                                                      *
************************************************************************/

#pragma comment( linker, "/subsystem:console" )  
typedef LONG NTSTATUS;

#define NT_SUCCESS(status)      ((NTSTATUS)(status)>=0)  

/*
*************************************************************************
* <<Windows NT/2000 Native API Reference>> by Gary Nebbett
*/

/*
* 虽然本程序用不到这么多枚举值，还是列出一份最完整的。这个程序本身不求完
* 美，尽可能多地保留一些未文档化的参考资料。
*/
typedef enum _SYSTEM_INFORMATION_CLASS     //    Q S  
{
	SystemBasicInformation,                // 00 Y N  
	SystemProcessorInformation,            // 01 Y N  
	SystemPerformanceInformation,          // 02 Y N  
	SystemTimeOfDayInformation,            // 03 Y N  
	SystemNotImplemented1,                 // 04 Y N  
	SystemProcessesAndThreadsInformation,  // 05 Y N  
	SystemCallCounts,                      // 06 Y N  
	SystemConfigurationInformation,        // 07 Y N  
	SystemProcessorTimes,                  // 08 Y N  
	SystemGlobalFlag,                      // 09 Y Y  
	SystemNotImplemented2,                 // 10 Y N  
	SystemModuleInformation,               // 11 Y N  
	SystemLockInformation,                 // 12 Y N  
	SystemNotImplemented3,                 // 13 Y N  
	SystemNotImplemented4,                 // 14 Y N  
	SystemNotImplemented5,                 // 15 Y N  
	SystemHandleInformation,               // 16 Y N  
	SystemObjectInformation,               // 17 Y N  
	SystemPagefileInformation,             // 18 Y N  
	SystemInstructionEmulationCounts,      // 19 Y N  
	SystemInvalidInfoClass1,               // 20  
	SystemCacheInformation,                // 21 Y Y  
	SystemPoolTagInformation,              // 22 Y N  
	SystemProcessorStatistics,             // 23 Y N  
	SystemDpcInformation,                  // 24 Y Y  
	SystemNotImplemented6,                 // 25 Y N  
	SystemLoadImage,                       // 26 N Y  
	SystemUnloadImage,                     // 27 N Y  
	SystemTimeAdjustment,                  // 28 Y Y  
	SystemNotImplemented7,                 // 29 Y N  
	SystemNotImplemented8,                 // 30 Y N  
	SystemNotImplemented9,                 // 31 Y N  
	SystemCrashDumpInformation,            // 32 Y N  
	SystemExceptionInformation,            // 33 Y N  
	SystemCrashDumpStateInformation,       // 34 Y Y/N  
	SystemKernelDebuggerInformation,       // 35 Y N  
	SystemContextSwitchInformation,        // 36 Y N  
	SystemRegistryQuotaInformation,        // 37 Y Y  
	SystemLoadAndCallImage,                // 38 N Y  
	SystemPrioritySeparation,              // 39 N Y  
	SystemNotImplemented10,                // 40 Y N  
	SystemNotImplemented11,                // 41 Y N  
	SystemInvalidInfoClass2,               // 42  
	SystemInvalidInfoClass3,               // 43  
	SystemTimeZoneInformation,             // 44 Y N  
	SystemLookasideInformation,            // 45 Y N  
	SystemSetTimeSlipEvent,                // 46 N Y  
	SystemCreateSession,                   // 47 N Y  
	SystemDeleteSession,                   // 48 N Y  
	SystemInvalidInfoClass4,               // 49  
	SystemRangeStartInformation,           // 50 Y N  
	SystemVerifierInformation,             // 51 Y Y  
	SystemAddVerifier,                     // 52 N Y  
	SystemSessionProcessesInformation      // 53 Y N  
} SYSTEM_INFORMATION_CLASS;

typedef struct _SYSTEM_MODULE_INFORMATION  // Information Class 11  
{
	ULONG  Reserved[2];
	PVOID  Base;
	ULONG  Size;
	ULONG  Flags;
	USHORT Index;
	USHORT Unknown;
	USHORT LoadCount;
	USHORT ModuleNameOffset;
	CHAR   ImageName[256];
} SYSTEM_MODULE_INFORMATION, *PSYSTEM_MODULE_INFORMATION;
/*
* <<Windows NT/2000 Native API Reference>> by Gary Nebbett
*************************************************************************
*/

/*
* 参看DDK文档以及<<Windows NT/2000 Native API Reference>> by Gary Nebbett
* 这些Native API由ntdll.dll输出
*/
typedef NTSTATUS(__stdcall *ZWQUERYSYSTEMINFORMATION) (IN SYSTEM_INFORMATION_CLASS SystemInformationClass, IN OUT PVOID SystemInformation, IN ULONG SystemInformationLength, OUT PULONG ReturnLength OPTIONAL);
typedef ULONG(__stdcall *RTLNTSTATUSTODOSERROR) (IN NTSTATUS Status);

/************************************************************************
*                                                                      *
*                            Function Prototype                        *
*                                                                      *
************************************************************************/

static void    ListModule(void);
static BOOLEAN LocateNtdllEntry(void);
static void    PrintWin32Error(char *message, DWORD dwMessageId);
static void    PrintZwError(char *message, NTSTATUS status);
static PVOID   PrivateFindModule(const char *ModuleName);

/************************************************************************
*                                                                      *
*                            Static Global Var                         *
*                                                                      *
************************************************************************/

/*
* 由ntdll.dll输出的Native API函数指针
*/
static ZWQUERYSYSTEMINFORMATION ZwQuerySystemInformation = NULL;
static RTLNTSTATUSTODOSERROR    RtlNtStatusToDosError = NULL;

/***************************/