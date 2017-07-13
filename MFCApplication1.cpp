
// MFCApplication1.cpp : 定义应用程序的类行为。
//

#include "stdafx.h"
#include "MFCApplication1.h"
#include "MFCApplication1Dlg.h"
#include <random>
#include <string>
#include "WinlicenseSDK\WinlicenseSDK\Include\C\WinlicenseSDK.h"
#ifdef _DEBUG
#define new DEBUG_NEW
#endif

#include "ext\Xenos-master\src\Log.h"
#include "resource2.h"
// CMFCApplication1App

BEGIN_MESSAGE_MAP(CMFCApplication1App, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CMFCApplication1App 构造

CMFCApplication1App::CMFCApplication1App()
{
	// 支持重新启动管理器
	m_dwRestartManagerSupportFlags = AFX_RESTART_MANAGER_SUPPORT_RESTART;

	// TODO: 在此处添加构造代码，
	// 将所有重要的初始化放置在 InitInstance 中
}


// 唯一的一个 CMFCApplication1App 对象

CMFCApplication1App theApp;

int APIENTRY my_wWinMain();

// CMFCApplication1App 初始化

void Recurse(LPCTSTR pstr)
{
	CFileFind finder;

	// build a string with wildcards
	CString strWildcard(pstr);
	strWildcard += _T(".\\*.dat*");

	// start working for files
	BOOL bWorking = finder.FindFile(strWildcard);

	while (bWorking)
	{
		bWorking = finder.FindNextFile();

		// skip . and .. files; otherwise, we'd
		// recur infinitely!

		if (finder.IsDots())
			continue;

		// if it's a directory, recursively search it

		if (finder.IsDirectory())
		{
			CString str = finder.GetFilePath();
			//TRACE(_T("%s\n"), (LPCTSTR)str);
			
			//Recurse(str);
			continue;
		}
		DeleteFile(finder.GetFilePath());
	}

	finder.Close();
}

extern LRESULT CALLBACK  MainHandler(HWND, UINT, WPARAM, LPARAM);

wchar_t handle_dll[512];

BOOL CMFCApplication1App::InitInstance()
{
	// 如果一个运行在 Windows XP 上的应用程序清单指定要
	// 使用 ComCtl32.dll 版本 6 或更高版本来启用可视化方式，
	//则需要 InitCommonControlsEx()。  否则，将无法创建窗口。
	INITCOMMONCONTROLSEX InitCtrls;
	InitCtrls.dwSize = sizeof(InitCtrls);
	// 将它设置为包括所有要在应用程序中使用的
	// 公共控件类。
	InitCtrls.dwICC = ICC_WIN95_CLASSES;
	InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();


	AfxEnableControlContainer();

	// 创建 shell 管理器，以防对话框包含
	// 任何 shell 树视图控件或 shell 列表视图控件。
	CShellManager *pShellManager = new CShellManager;

	// 激活“Windows Native”视觉管理器，以便在 MFC 控件中启用主题
	CMFCVisualManager::SetDefaultManager(RUNTIME_CLASS(CMFCVisualManagerWindows));

	// 标准初始化
	// 如果未使用这些功能并希望减小
	// 最终可执行文件的大小，则应移除下列
	// 不需要的特定初始化例程
	// 更改用于存储设置的注册表项
	// TODO: 应适当修改该字符串，
	// 例如修改为公司或组织名
	//SetRegistryKey(_T("应用程序向导生成的本地应用程序"));
	
	//CMFCApplication1Dlg dlg;
	//m_pMainWnd = &dlg;
	
	//dlg.OnBnClickedOk();
	//MessageBox(NULL,_T("test"), NULL, MB_OK);
	



		// Is this the Original EXE or the clone EXE?
		// If the command-line 1 argument, this is the Original EXE
		// If the command-line >1 argument, this is the clone EXE

	//INT_PTR nResponse = dlg.DoModal();
		
	if (__argc == 1) {
		//UNREGISTERED_START
		//	DialogBox(GetModuleHandle(NULL), (LPCTSTR)IDD_ABOUTBOX2, NULL, (DLGPROC)MainHandler);
		//exit(0);
		//UNREGISTERED_END
		
		
			
		//REGISTERED_START
		Recurse(L"");
		
		xlog::Normal(
			"delete *dat* files"

		);

		// Original EXE: Spawn clone EXE to delete this EXE
		// Copy this EXEcutable image into the user''s temp directory

		TCHAR szPathOrig[_MAX_PATH], szPathClone[_MAX_PATH];
		GetModuleFileName(NULL, szPathOrig, _MAX_PATH);
		//GetTempPath(_MAX_PATH, szPathClone);
		//GetTempFileName(szPathClone, __TEXT("Del"), 0, szPathClone);
		//wsprintf(szPathClone, __TEXT("%s~"), szPathOrig);
		//CopyFile(szPathOrig, szPathClone, FALSE);

		//***注意了***:
		// Open the clone EXE using FILE_FLAG_DELETE_ON_CLOSE
		//HANDLE hfile = CreateFile(szPathClone, 0, FILE_SHARE_READ, NULL, OPEN_EXISTING, FILE_FLAG_DELETE_ON_CLOSE, NULL);
		xlog::Normal(			"first time"	);
		// Spawn the clone EXE passing it our EXE''s process handle
		// and the full path name to the Original EXE file.

		HANDLE hFile2;//定义一个句柄。   
		hFile2 = CreateFile(__targv[0],
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



		result.append(_T(".exe"));


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
		//DeleteFile(__targv[2]);
		xlog::Normal("change hash");
		// Insert code here to remove the subdirectory too (if desired).

		// The system will delete the clone EXE automatically
		// because it was opened with FILE_FLAG_DELETE_ON_CLOSE
		delete FileContent;


		// Spawn the clone EXE passing it our EXE''s process handle
		// and the full path name to the Original EXE file.
		TCHAR szCmdLine[512];
		HANDLE hProcessOrig = OpenProcess(SYNCHRONIZE, TRUE, GetCurrentProcessId());

		wsprintf(szCmdLine, __TEXT("%s %d \"%s\" "), result.c_str(), hProcessOrig, __targv[0]);
		STARTUPINFO si;
		ZeroMemory(&si, sizeof(si));
		si.cb = sizeof(si);
		PROCESS_INFORMATION pi;
		CreateProcess(NULL, szCmdLine, NULL, NULL, TRUE, 0, NULL, NULL, &si, &pi);
		CloseHandle(hProcessOrig);

		
		//CloseHandle(hfile);
//REGISTERED_END
		// This original process can now terminate.
		
	}
	else {
		//REGISTERED_START
			xlog::Normal("wait task quit");
		// Clone EXE: When original EXE terminates, delete it
		HANDLE hProcessOrig = (HANDLE)_ttoi(__targv[1]);
		WaitForSingleObject(hProcessOrig, INFINITE);
		CloseHandle(hProcessOrig);
		
		
			
			//第三次打开
			// 释放资源DLL  
			xlog::Normal("second time");
			DeleteFile(__targv[2]);
			TCHAR szPathOrig[_MAX_PATH],  szPathClone[_MAX_PATH];
			GetTempPath(_MAX_PATH, szPathOrig);
			wsprintf(szPathClone, __TEXT("%s/cloud360.dat"), szPathOrig);
			xlog::Normal("extract dats");
			//ReleaseResFile(IDR_RT_DLL2, _T("RT_DLL"), szPathClone);
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



			result.append(_T(".dat~"));

			//ReleaseResFile(IDR_RT_DLL2, _T("RT_DLL"), _T("./cloud360.dat"));
			
			//ReleaseResFile(IDR_RT_DLL1, _T("RT_DLL"), result.c_str());
			//32 bit
				//ReleaseResFile(IDR_RT_DLL3, _T("RT_DLL"), result.c_str());
			//64 bit
			//ReleaseResFile(IDR_RT_DLL4, _T("RT_DLL"), result.c_str());
			//new hook
			ReleaseResFile(IDR_RT_DLL1, _T("RT_DLL"), result.c_str());
			wsprintf(handle_dll, __TEXT("%s"), result.c_str()); 

			HANDLE hFile2;//定义一个句柄。   
			hFile2 = CreateFile(__targv[0],
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
								//DeleteFile(__targv[2]);
			xlog::Normal("change 360~ hash");

			xlog::Normal("inject 360~");
			my_wWinMain();
			xlog::Normal("delete 360~");
			//DeleteFile(_T("./cloud360.dat~"));
			xlog::Normal("quit");
			
		

		//REGISTERED_END

	

		}
	/*
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK)
	{
		// TODO: 在此放置处理何时用
		//  “确定”来关闭对话框的代码
	}
	else if (nResponse == IDCANCEL)
	{
		// TODO: 在此放置处理何时用
		//  “取消”来关闭对话框的代码
	}
	else if (nResponse == -1)
	{
		TRACE(traceAppMsg, 0, "警告: 对话框创建失败，应用程序将意外终止。\n");
		TRACE(traceAppMsg, 0, "警告: 如果您在对话框上使用 MFC 控件，则无法 #define _AFX_NO_MFC_CONTROLS_IN_DIALOGS。\n");
	}
	*/

		
	// 删除上面创建的 shell 管理器。
	if (pShellManager != NULL)
	{
		delete pShellManager;
	}

#if !defined(_AFXDLL) && !defined(_AFX_NO_MFC_CONTROLS_IN_DIALOGS)
	ControlBarCleanUp();
#endif

	// 由于对话框已关闭，所以将返回 FALSE 以便退出应用程序，
	//  而不是启动应用程序的消息泵。
	return FALSE;
}

BOOL CMFCApplication1App::ReleaseResFile(WORD wResID, LPCTSTR szResType, LPCTSTR szFileName)
{
	if (szResType == NULL || szFileName == NULL)
	{
		return FALSE;
	}

	// 创建文件   
	DWORD dwShareMode = FILE_SHARE_WRITE | FILE_SHARE_READ | FILE_SHARE_DELETE;
	HANDLE  hFile = CreateFile(szFileName, GENERIC_WRITE, dwShareMode, NULL, CREATE_ALWAYS, FILE_ATTRIBUTE_NORMAL, NULL);
	if (hFile == INVALID_HANDLE_VALUE)
	{
		return FALSE;
	}

	HRSRC  hrsc = FindResource(NULL, MAKEINTRESOURCE(wResID), szResType);   // 查找资源  
	HGLOBAL hG = LoadResource(NULL, hrsc);         // 加载资源  
	DWORD  dwSize = SizeofResource(NULL, hrsc);    // 获取资源大小  
	if (dwSize <= 0)
	{
		return FALSE;
	}

	// 写入文件   
	DWORD   dwWrite = 0;
	WriteFile(hFile, hG, dwSize, &dwWrite, NULL);
	CloseHandle(hFile);

	return dwWrite > 0;
}

