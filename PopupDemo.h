#pragma once

#include "resource.h"

class CPopupDemoApp : public CWinApp
{
public:
	CPopupDemoApp();

public:
	virtual BOOL InitInstance();

	DECLARE_MESSAGE_MAP()
};

extern CPopupDemoApp theApp;
