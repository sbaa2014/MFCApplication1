/****************************************************************************** 
/* Module: Example
/* Description: Shows how to work with the Activation SDK
/*
/* Authors: Oreans Technologies  
/* (c) 2016 Oreans Technologies 
/*****************************************************************************/ 

/****************************************************************************** 
/*                   Libraries used by this module
/*****************************************************************************/ 

#include "stdafx.h"
#include <stdio.h>
#include "Resource2.h"
#include <commctrl.h>
#include <windows.h>
#include "WinlicenseSDK\WinlicenseSDK\Include\C\WinlicenseSDK.h"

/****************************************************************************** 
/*                          Function prototypes
/*****************************************************************************/ 

LRESULT CALLBACK  MainHandler(HWND, UINT, WPARAM, LPARAM);

/****************************************************************************** 
/*                          Global variables
/*****************************************************************************/ 

/****************************************************************************** 
/*                             Code Section
/*****************************************************************************/ 

/*****************************************************************************
* WinMain
******************************************************************************/
/*
int APIENTRY _tWinMain(
	HINSTANCE hInstance,
	HINSTANCE hPrevInstance,
	LPTSTR    lpCmdLine,
	int       nCmdShow)
{
    DialogBox(GetModuleHandle(NULL), (LPCTSTR)IDD_ABOUTBOX, NULL, (DLGPROC)MainHandler);
    return 0;
}
*/
/*****************************************************************************
* MainHandler
******************************************************************************/
LRESULT CALLBACK MainHandler(
	HWND hDlg, 
	UINT message, 
	WPARAM wParam, 
	LPARAM lParam)
{
   int Status; 
   char AuxBuffer[255];
   char RegName[255];
   char CompanyName[255];
   char CustomData[255];
   SYSTEMTIME TrialDate = {0,0,0,0,0,0,0,0};
   int RegExtendedInfo;

    switch (message)
    {
	case WM_INITDIALOG:
		return TRUE;

	case WM_COMMAND:
		if (LOWORD(wParam) == IDCANCEL)
		{
			EndDialog(hDlg, LOWORD(wParam));
			return TRUE;
		}

		if (LOWORD(wParam) == IDC_CHECK_APP_STATUS)
		{
			// get application status
			Status = WLRegGetStatus(&RegExtendedInfo);

			switch (Status)
			{
			case 0:
				SetDlgItemText(hDlg, IDC_STATUS, L"Trial");
				break;

			case 1:
				SetDlgItemText(hDlg, IDC_STATUS, L"Registered");
				break;

			case 2:
				SetDlgItemText(hDlg, IDC_STATUS, L"Invalid License");
				break;

			case 3:
				SetDlgItemText(hDlg, IDC_STATUS, L"License Locked to different machine");
				break;

			case 4:
				SetDlgItemText(hDlg, IDC_STATUS, L"No more HW-ID changes allowed");
				break;

			case 5:
				SetDlgItemText(hDlg, IDC_STATUS, L"License Key expired");
				break;
			}

			if (Status != 1)
			{
				// set trial labels data                
				sprintf_s(AuxBuffer, "%d", WLTrialDaysLeft());
				SetDlgItemTextA(hDlg, IDC_DAYSLEFT, AuxBuffer);

				sprintf_s(AuxBuffer, "%d", WLTrialExecutionsLeft());
				SetDlgItemTextA(hDlg, IDC_EXECLEFT, AuxBuffer);

				sprintf_s(AuxBuffer, "%d", WLTrialGlobalTimeLeft());
				SetDlgItemTextA(hDlg, IDC_MINUTESLEFT, AuxBuffer);

				sprintf_s(AuxBuffer, "%d", WLTrialRuntimeLeft());
				SetDlgItemTextA(hDlg, IDC_RUNTIMELEFT, AuxBuffer);

				WLTrialExpirationDate(&TrialDate);
				SendDlgItemMessageA(hDlg, IDC_DATETIMEPICKER1, DTM_SETSYSTEMTIME, GDT_VALID, (LPARAM)&TrialDate);

				// set registration label data as empty  

				SetDlgItemTextA(hDlg, IDC_EDITNAME, "");
				SetDlgItemTextA(hDlg, IDC_EDITCOMPANY, "");
				SetDlgItemTextA(hDlg, IDC_EDITCUSTOM, "");
				SetDlgItemTextA(hDlg, IDC_REG_DAYSLEFT, "");
				SetDlgItemTextA(hDlg, IDC_REG_EXECLEFT, "");
			}
			else
			{
				WLRegGetLicenseInfo(RegName, CompanyName, CustomData);

				SetDlgItemTextA(hDlg, IDC_EDITNAME, RegName);
				SetDlgItemTextA(hDlg, IDC_EDITCOMPANY, CompanyName);
				SetDlgItemTextA(hDlg, IDC_EDITCUSTOM, CustomData);

				sprintf_s(AuxBuffer, "%d", WLRegDaysLeft());
				SetDlgItemTextA(hDlg, IDC_REG_DAYSLEFT, AuxBuffer);

				sprintf_s(AuxBuffer, "%d", WLRegExecutionsLeft());
				SetDlgItemTextA(hDlg, IDC_REG_EXECLEFT, AuxBuffer);

				WLRegExpirationDate(&TrialDate);
				SendDlgItemMessageA(hDlg, IDC_DATETIMEPICKER2, DTM_SETSYSTEMTIME, GDT_VALID, (LPARAM)&TrialDate);

				// set trial information data as empty
				SetDlgItemTextA(hDlg, IDC_DAYSLEFT, "");
				SetDlgItemTextA(hDlg, IDC_EXECLEFT, "");
				SetDlgItemTextA(hDlg, IDC_MINUTESLEFT, "");
				SetDlgItemTextA(hDlg, IDC_RUNTIMELEFT, "");
			}
		}


        if (LOWORD(wParam) == IDCANCEL) 
        {
            EndDialog(hDlg, LOWORD(wParam));
            return TRUE;
        }

        
        if (LOWORD(wParam) == IDC_BUTTON_ACTIVATE)
        {
			const int SIZE_SERVER_OUTPUT = 1024;
			const int MAX_SIZE_ACTIVATION_KEY = 128;
			int ActivationErrorCode=0;
			int WinSockErrorCode;
            wchar_t ServerOutput[SIZE_SERVER_OUTPUT];
			wchar_t ActivationKey[MAX_SIZE_ACTIVATION_KEY];
			char ServerOutput2[SIZE_SERVER_OUTPUT];
			char  ActivationKey2[MAX_SIZE_ACTIVATION_KEY];
            GetDlgItemText(hDlg, IDC_EDIT_ACTIVATE, ActivationKey, MAX_SIZE_ACTIVATION_KEY);
			sprintf_s(ActivationKey2, "%ws", ActivationKey);
			sprintf_s(ServerOutput2, "%ws", ServerOutput);
			ActivationErrorCode = WLRegActivateSoftware(ActivationKey2, &WinSockErrorCode,
													    ServerOutput2, SIZE_SERVER_OUTPUT);
			
			if (ActivationErrorCode == wlActivationOk)
			{
				MessageBoxA(NULL, "Application activated successfully. Application will restart now", "Activate", 
						   MB_ICONINFORMATION | MB_OK);
				WLRestartApplication();
			}
			else
			{
				MessageBoxA(NULL, "There was an error while activating your software", "Activate", 
						   MB_ICONERROR | MB_OK);
				MessageBox(NULL, ServerOutput, L"Server output", MB_ICONINFORMATION | MB_OK);
			}
        }
        if (LOWORD(wParam) == IDC_BUTTON_DEACTIVATE)
        {
			const int SIZE_SERVER_OUTPUT = 1024;
			const int MAX_SIZE_ACTIVATION_KEY = 128;
			int ActivationErrorCode=0;
			int WinSockErrorCode;
            wchar_t ServerOutput[SIZE_SERVER_OUTPUT];
			wchar_t ActivationKey[MAX_SIZE_ACTIVATION_KEY];
			char ServerOutput2[SIZE_SERVER_OUTPUT];
			char  ActivationKey2[MAX_SIZE_ACTIVATION_KEY];


            GetDlgItemText(hDlg, IDC_EDIT_DEACTIVATE, ActivationKey, MAX_SIZE_ACTIVATION_KEY);

			sprintf_s(ActivationKey2, "%ws", ActivationKey);
			sprintf_s(ServerOutput2, "%ws", ServerOutput);
			ActivationErrorCode = WLRegDeactivateSoftware(ActivationKey2, &WinSockErrorCode,
													    ServerOutput2, SIZE_SERVER_OUTPUT);

			if (ActivationErrorCode == wlActivationOk)
			{
				MessageBoxA(NULL, "Application deactivated successfully. Application will restart now", "Deactivate", 
						   MB_ICONINFORMATION | MB_OK);
				WLRestartApplication();
			}
			else
			{
				MessageBoxA(NULL, "There was an error while deactivating your software", "Deactivate", 
						   MB_ICONERROR | MB_OK);
				MessageBox(NULL, ServerOutput, L"Server output", MB_ICONINFORMATION | MB_OK);
			}
        }
        break;
    }    
    return FALSE;
}
