
// KakaoTalk Macro.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "KakaoTalk Macro.h"
#include "KakaoTalk MacroDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif


// CKakaoTalkMacroApp

BEGIN_MESSAGE_MAP(CKakaoTalkMacroApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()


// CKakaoTalkMacroApp construction

CKakaoTalkMacroApp::CKakaoTalkMacroApp()
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance
}


// The one and only CKakaoTalkMacroApp object

CKakaoTalkMacroApp theApp;


// CKakaoTalkMacroApp initialization

BOOL CKakaoTalkMacroApp::InitInstance()
{
	CWinApp::InitInstance();

	CKakaoTalkMacroDlg dlg;
	m_pMainWnd = &dlg;
	dlg.DoModal();
	
	return FALSE;
}

