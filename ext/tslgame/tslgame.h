
// tslgame.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CtslgameApp:
// See tslgame.cpp for the implementation of this class
//

class CtslgameApp : public CWinApp
{
public:
	CtslgameApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CtslgameApp theApp;
