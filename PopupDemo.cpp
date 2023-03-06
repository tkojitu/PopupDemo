#include "stdafx.h"
#include "PopupDemo.h"
#include "PopupDemoDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

BEGIN_MESSAGE_MAP(CPopupDemoApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

CPopupDemoApp::CPopupDemoApp()
{
}

CPopupDemoApp theApp;

BOOL CPopupDemoApp::InitInstance()
{
	CWinApp::InitInstance();
	SetRegistryKey(_T("PopupDemo"));
	CPopupDemoDlg dlg;
	m_pMainWnd = &dlg;
	INT_PTR nResponse = dlg.DoModal();
	if (nResponse == IDOK) {
	}
	else if (nResponse == IDCANCEL) {
	}
	else if (nResponse == -1) {
	}
	return FALSE;
}
