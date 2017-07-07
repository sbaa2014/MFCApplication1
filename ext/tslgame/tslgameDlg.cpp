
// tslgameDlg.cpp : implementation file
//

#include "stdafx.h"
#include "tslgame.h"
#include "tslgameDlg.h"
#include "afxdialogex.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include "c:\Program Files (x86)\Windows Kits\10\Include\10.0.15063.0\shared\ntstatus.h"
//#include "c:\Program Files (x86)\Windows Kits\8.1\Include\um\winternl.h"
// CAboutDlg dialog used for App About

class CAboutDlg : public CDialogEx
{
public:
	CAboutDlg();

// Dialog Data
#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_ABOUTBOX };
#endif

	protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

// Implementation
protected:
	DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialogEx(IDD_ABOUTBOX)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialogEx)
END_MESSAGE_MAP()


// CtslgameDlg dialog



CtslgameDlg::CtslgameDlg(CWnd* pParent /*=NULL*/)
	: CDialogEx(IDD_TSLGAME_DIALOG, pParent)
{
	m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CtslgameDlg::DoDataExchange(CDataExchange* pDX)
{
	CDialogEx::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CtslgameDlg, CDialogEx)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	ON_BN_CLICKED(IDOK, &CtslgameDlg::OnBnClickedOk)
END_MESSAGE_MAP()


// CtslgameDlg message handlers

BOOL CtslgameDlg::OnInitDialog()
{
	CDialogEx::OnInitDialog();

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		BOOL bNameValid;
		CString strAboutMenu;
		bNameValid = strAboutMenu.LoadString(IDS_ABOUTBOX);
		ASSERT(bNameValid);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	ShowWindow(SW_NORMAL);

	// TODO: Add extra initialization here

	return TRUE;  // return TRUE  unless you set the focus to a control
}

void CtslgameDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
	if ((nID & 0xFFF0) == IDM_ABOUTBOX)
	{
		CAboutDlg dlgAbout;
		dlgAbout.DoModal();
	}
	else
	{
		CDialogEx::OnSysCommand(nID, lParam);
	}
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CtslgameDlg::OnPaint()
{
	if (IsIconic())
	{
		CPaintDC dc(this); // device context for painting

		SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

		// Center icon in client rectangle
		int cxIcon = GetSystemMetrics(SM_CXICON);
		int cyIcon = GetSystemMetrics(SM_CYICON);
		CRect rect;
		GetClientRect(&rect);
		int x = (rect.Width() - cxIcon + 1) / 2;
		int y = (rect.Height() - cyIcon + 1) / 2;

		// Draw the icon
		dc.DrawIcon(x, y, m_hIcon);
	}
	else
	{
		CDialogEx::OnPaint();
	}
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CtslgameDlg::OnQueryDragIcon()
{
	return static_cast<HCURSOR>(m_hIcon);
}

typedef enum _SYSTEMINFOCLASS
{
	SystemBasicInformation,             // 0x002C
	SystemProcessorInformation,         // 0x000C
	SystemPerformanceInformation,       // 0x0138
	SystemTimeInformation,              // 0x0020
	SystemPathInformation,              // not implemented
	SystemProcessInformation,           // 0x00C8+ per process
	SystemCallInformation,              // 0x0018 + (n * 0x0004)
	SystemConfigurationInformation,     // 0x0018
	SystemProcessorCounters,            // 0x0030 per cpu
	SystemGlobalFlag,                   // 0x0004 (fails if size != 4)
	SystemCallTimeInformation,          // not implemented
	SystemModuleInformation,            // 0x0004 + (n * 0x011C)
	SystemLockInformation,              // 0x0004 + (n * 0x0024)
	SystemStackTraceInformation,        // not implemented
	SystemPagedPoolInformation,         // checked build only
	SystemNonPagedPoolInformation,      // checked build only
	SystemHandleInformation,            // 0x0004  + (n * 0x0010)
	SystemObjectTypeInformation,        // 0x0038+ + (n * 0x0030+)
	SystemPageFileInformation,          // 0x0018+ per page file
	SystemVdmInstemulInformation,       // 0x0088
	SystemVdmBopInformation,            // invalid info class
	SystemCacheInformation,             // 0x0024
	SystemPoolTagInformation,           // 0x0004 + (n * 0x001C)
	SystemInterruptInformation,         // 0x0000, or 0x0018 per cpu
	SystemDpcInformation,               // 0x0014
	SystemFullMemoryInformation,        // checked build only
	SystemLoadDriver,                   // 0x0018, set mode only
	SystemUnloadDriver,                 // 0x0004, set mode only
	SystemTimeAdjustmentInformation,    // 0x000C, 0x0008 writeable
	SystemSummaryMemoryInformation,     // checked build only
	SystemNextEventIdInformation,       // checked build only
	SystemEventIdsInformation,          // checked build only
	SystemCrashDumpInformation,         // 0x0004
	SystemExceptionInformation,         // 0x0010
	SystemCrashDumpStateInformation,    // 0x0004
	SystemDebuggerInformation,          // 0x0002
	SystemContextSwitchInformation,     // 0x0030
	SystemRegistryQuotaInformation,     // 0x000C
	SystemAddDriver,                    // 0x0008, set mode only
	SystemPrioritySeparationInformation,// 0x0004, set mode only
	SystemPlugPlayBusInformation,       // not implemented
	SystemDockInformation,              // not implemented
	SystemPowerInfo,             // 0x0060 (XP only!)
	SystemProcessorSpeedInformation,    // 0x000C (XP only!)
	SystemTimeZoneInformation,          // 0x00AC
	SystemLookasideInformation,         // n * 0x0020
	SystemSetTimeSlipEvent,
	SystemCreateSession,    // set mode only
	SystemDeleteSession,    // set mode only
	SystemInvalidInfoClass1,   // invalid info class
	SystemRangeStartInformation,   // 0x0004 (fails if size != 4)
	SystemVerifierInformation,
	SystemAddVerifier,
	SystemSessionProcessesInformation, // checked build only
	MaxSystemInfoClass
} SYSTEMINFOCLASS, *PSYSTEMINFOCLASS;



typedef struct _SYSTEM_HANDLE
{
	ULONG  uIdProcess;
	UCHAR  ObjectType;    // OB_TYPE_* (OB_TYPE_TYPE, etc.)
	UCHAR  Flags;         // HANDLE_FLAG_* (HANDLE_FLAG_INHERIT, etc.)
	USHORT  Handle;
	PVOID  pObject;
	ACCESS_MASK GrantedAccess;
} SYSTEM_HANDLE, *PSYSTEM_HANDLE;

typedef struct _SYSTEM_HANDLE_INFORMATION
{
	ULONG   uCount;
	SYSTEM_HANDLE aSH[];
} SYSTEM_HANDLE_INFORMATION, *PSYSTEM_HANDLE_INFORMATION;

typedef LONG  NTSTATUS;

typedef NTSTATUS(WINAPI *ZWQUERYSYSTEMINFORMATION)(unsigned long, PVOID, ULONG, PULONG);


NTSTATUS
ZwQuerySystemInformation(
	IN SYSTEMINFOCLASS SystemInformationClass,
	OUT PVOID SystemInformation,
	IN ULONG SystemInformationLength,
	OUT PULONG ReturnLength OPTIONAL
);
HANDLE hHeap;

PVOID GetInfoTable(IN ULONG ATableType)
{
	ULONG    mSize = 0x8000;
	PVOID    mPtr;
	NTSTATUS status;
	do
	{
		mPtr = HeapAlloc(hHeap, 0, mSize);
		if (!mPtr) return NULL;
		memset(mPtr, 0, mSize);

		HMODULE hNtDLL = LoadLibrary(L"NTDLL.DLL");
		if (!hNtDLL)
		{
			return FALSE;
		}

		ZWQUERYSYSTEMINFORMATION ZwQuerySystemInformation = (ZWQUERYSYSTEMINFORMATION)GetProcAddress(hNtDLL, "ZwQuerySystemInformation");
		if (ZwQuerySystemInformation == NULL)
		{
			return FALSE;
		}

		status = ZwQuerySystemInformation(ATableType, mPtr, mSize, NULL);

		if (status == STATUS_INFO_LENGTH_MISMATCH)
		{
			HeapFree(hHeap, 0, mPtr);
			mSize = mSize * 2;
		}
	} while (status == STATUS_INFO_LENGTH_MISMATCH);
	if (status==0) return mPtr;
	HeapFree(hHeap, 0, mPtr);
	return NULL;
}
typedef struct _FILE_NAME_INFORMATION {
	ULONG  FileNameLength;
	WCHAR  FileName[1];
} FILE_NAME_INFORMATION, *PFILE_NAME_INFORMATION;
typedef struct _NM_INFO
{
	HANDLE  hFile;
	FILE_NAME_INFORMATION Info;
	WCHAR Name[MAX_PATH];
} NM_INFO, *PNM_INFO;

typedef struct _IO_STATUS_BLOCK {
	union {
		NTSTATUS Status;
		PVOID Pointer;
	} DUMMYUNIONNAME;

	ULONG_PTR Information;
} IO_STATUS_BLOCK, *PIO_STATUS_BLOCK;


typedef enum _FILE_INFORMATION_CLASS {
	FileDirectoryInformation = 1,
	FileFullDirectoryInformation,
	FileBothDirectoryInformation,
	FileBasicInformation,
	FileStandardInformation,
	FileInternalInformation,
	FileEaInformation,
	FileAccessInformation,
	FileNameInformation,
	FileRenameInformation,
	FileLinkInformation,
	FileNamesInformation,
	FileDispositionInformation,
	FilePositionInformation,
	FileFullEaInformation,
	FileModeInformation,
	FileAlignmentInformation,
	FileAllInformation,
	FileAllocationInformation,
	FileEndOfFileInformation,
	FileAlternateNameInformation,
	FileStreamInformation,
	FilePipeInformation,
	FilePipeLocalInformation,
	FilePipeRemoteInformation,
	FileMailslotQueryInformation,
	FileMailslotSetInformation,
	FileCompressionInformation,
	FileCopyOnWriteInformation,
	FileCompletionInformation,
	FileMoveClusterInformation,
	FileQuotaInformation,
	FileReparsePointInformation,
	FileNetworkOpenInformation,
	FileObjectIdInformation,
	FileTrackingInformation,
	FileOleDirectoryInformation,
	FileContentIndexInformation,
	FileInheritContentIndexInformation,
	FileOleInformation,
	FileMaximumInformation,
} FILE_INFORMATION_CLASS, *PFILE_INFORMATION_CLASS;

typedef NTSTATUS(WINAPI *ZWQUERYINFORMATIONFILE)(HANDLE, PIO_STATUS_BLOCK, PVOID, ULONG,FILE_INFORMATION_CLASS);


NTSTATUS
ZwQueryInformationFile(
	IN HANDLE  FileHandle,
	OUT PIO_STATUS_BLOCK  IoStatusBlock,
	OUT PVOID  FileInformation,
	IN ULONG  Length,
	IN FILE_INFORMATION_CLASS  FileInformationClass
);








DWORD WINAPI GetFileNameThread(PVOID lpParameter)
{
	PNM_INFO NmInfo = (PNM_INFO)lpParameter;
	IO_STATUS_BLOCK IoStatus;
	HMODULE hNtDLL = LoadLibrary(L"NTDLL.DLL");
	if (!hNtDLL)
	{
		return FALSE;
	}
	ZWQUERYINFORMATIONFILE ZwQueryInformationFile = (ZWQUERYINFORMATIONFILE)GetProcAddress(hNtDLL, "ZwQueryInformationFile");
	if (ZwQueryInformationFile == NULL)
	{
		return FALSE;
	}
	ZwQueryInformationFile(NmInfo->hFile, &IoStatus, &NmInfo->Info, sizeof(NM_INFO) - sizeof(HANDLE), FileNameInformation);
	return 0;
}

void GetFileName(HANDLE hFile, PCHAR TheName)
{
	HANDLE   hThread;
	PNM_INFO Info = (PNM_INFO)HeapAlloc(hHeap, 0, sizeof(NM_INFO));
	Info->hFile = hFile;
	hThread = CreateThread(NULL, 0, GetFileNameThread, Info, 0, NULL);
	if (WaitForSingleObject(hThread, INFINITE) == WAIT_TIMEOUT) TerminateThread(hThread, 0);
	CloseHandle(hThread);
	memset(TheName, 0, MAX_PATH);
	WideCharToMultiByte(CP_ACP, 0, Info->Info.FileName, Info->Info.FileNameLength >> 1, TheName, MAX_PATH, NULL, NULL);
	HeapFree(hHeap, 0, Info);
}

void MyCloseHandle(DWORD pid)
{
	//获取进程中的句柄
	PSYSTEM_HANDLE_INFORMATION Info;
	ULONG r;
	CHAR Name[MAX_PATH];
	HANDLE hProcess, hFile;
	hHeap = GetProcessHeap();
	Info = (PSYSTEM_HANDLE_INFORMATION)GetInfoTable(SystemHandleInformation);
	if (Info)
	{
		for (r = 0; r < Info->uCount; r++)
		{
			if (Info->aSH[r].uIdProcess == pid)
			{
				hProcess = OpenProcess(PROCESS_DUP_HANDLE, FALSE, Info->aSH[r].uIdProcess);
				if (hProcess)
				{
					if (DuplicateHandle(hProcess, (HANDLE)Info->aSH[r].Handle, GetCurrentProcess(), &hFile, 0, FALSE, DUPLICATE_SAME_ACCESS))
					{
						GetFileName(hFile, Name);
						if (strstr(Name, "Intel") != NULL)
						{
							printf("PID=%d FileHandle %d FileName=%s\n", Info->aSH[r].uIdProcess, Info->aSH[r].Handle, Name);
						}

						CloseHandle(hFile);
					}
					CloseHandle(hProcess);
				}
			}
		}
		HeapFree(hHeap, 0, Info);
	}
	printf("Duplicate Finish.\n");
}

#ifndef NT_SUCCESS
#define NT_SUCCESS(Status) (((NTSTATUS)(Status)) >= 0)
#endif

DWORD   WINAPI   NtQueryObject(HANDLE   handle, DWORD   nQueryIndex, VOID*   pOutBuffer, DWORD   cbInBufferSize, VOID*   cbOutBufferSize);
/*
HANDLE GetProcessKernelObject(DWORD ProcessId)
{

	HMODULE hNtDll = NULL;
	ZWQUERYSYSTEMINFORMATION pfnZwQuerySystemInformation = NULL;
	NTQUERYOBJECT pfnNtQueryObject = NULL;
	PSYSTEM_HANDLE_INFORMATION pSysHandleInfo = NULL;
	POBJECT_ALL_INFORMATION pAllInfo = NULL;
	POBJECT_NAME_INFORMATION pNameInfo = NULL;

	ULONG nNumberHandle = 0;
	NTSTATUS ntStatus = 0;
	ULONG ulSize, ulCount;
	char cBuffer[0x80000], cInfoBuffer[0x10000];

	hNtDll = GetModuleHandle(TEXT("ntdll.dll"));
	pfnZwQuerySystemInformation = (ZWQUERYSYSTEMINFORMATION)GetProcAddress(hNtDll, "ZwQuerySystemInformation");
	pfnNtQueryObject = (NTQUERYOBJECT)GetProcAddress(hNtDll, "NtQueryObject");

	ntStatus = pfnZwQuerySystemInformation(SystemHandleInformation, cBuffer, 0x80000, &ulSize);

	if (NT_SUCCESS(ntStatus))
	{
		DWORD n = ulSize / sizeof(SYSTEM_HANDLE_INFORMATION);
		nNumberHandle = *(PULONG)cBuffer;
		pSysHandleInfo = (PSYSTEM_HANDLE_INFORMATION)(cBuffer + 4);
		ulCount = 0;

		for (ULONG i = 0; i != nNumberHandle; ++i)
		{

			if (pSysHandleInfo.ProcessId != ProcessId)
				continue;

			ntStatus = pfnNtQueryObject((HANDLE)pSysHandleInfo.Handle, ObjectAllInformation, cInfoBuffer, 0x10000, &ulSize);
			ntStatus = pfnNtQueryObject((HANDLE)pSysHandleInfo.Handle, ObjectNameInformation, cInfoBuffer, 0x10000, &ulSize);
			if (NT_SUCCESS(ntStatus))
			{
				pAllInfo = (POBJECT_ALL_INFORMATION)cInfoBuffer;
				pNameInfo = (POBJECT_NAME_INFORMATION)cInfoBuffer;
				if (_tcsstr(pNameInfo->NameBuffer, TEXT("QQGame_Mutex")) != NULL)
				{
					return (HWND)pSysHandleInfo.Handle;
				}
			}
		}
	}
	return NULL;
}
*/

void CtslgameDlg::OnBnClickedOk()
{
	// TODO: Add your control notification handler code here
	

	CDialogEx::OnOK();
}
