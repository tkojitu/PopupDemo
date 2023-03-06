#pragma once

class CPopupDemoDlg : public CDialog
{
public:
	CPopupDemoDlg(CWnd* pParent = NULL);

#ifdef AFX_DESIGN_TIME
	enum { IDD = IDD_POPUPDEMO_DIALOG };
#endif

protected:
	virtual void DoDataExchange(CDataExchange* pDX);
	virtual BOOL OnInitDialog();
	afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
	afx_msg void OnPaint();
	afx_msg HCURSOR OnQueryDragIcon();

protected:
    HICON m_hIcon;
    
    DECLARE_MESSAGE_MAP()
};
