// dllmain.cpp : Defines the entry point for the DLL application.
#include "stdafx.h"
// Target pointer for the uninstrumented Sleep API.  
/*
BOOL APIENTRY DllMain( HMODULE hModule,
                       DWORD  ul_reason_for_call,
                       LPVOID lpReserved
					 )
{
	switch (ul_reason_for_call)
	{
	case DLL_PROCESS_ATTACH:
		//
	case DLL_THREAD_ATTACH:
		//MessageBox(NULL, L"dll attached via thread", L"h", MB_OK);
	case DLL_THREAD_DETACH:
	case DLL_PROCESS_DETACH:
		break;
	}
	return TRUE;
}

*/