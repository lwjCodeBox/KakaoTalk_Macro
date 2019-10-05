
// KakaoTalk Macro.h : main header file for the PROJECT_NAME application
//

#pragma once

#ifndef __AFXWIN_H__
	#error "include 'stdafx.h' before including this file for PCH"
#endif

#include "resource.h"		// main symbols


// CKakaoTalkMacroApp:
// See KakaoTalk Macro.cpp for the implementation of this class
//

class CKakaoTalkMacroApp : public CWinApp
{
public:
	CKakaoTalkMacroApp();

// Overrides
public:
	virtual BOOL InitInstance();

// Implementation

	DECLARE_MESSAGE_MAP()
};

extern CKakaoTalkMacroApp theApp;
