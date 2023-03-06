#pragma once

class MyWnd : public CWnd
{
    DECLARE_DYNAMIC(MyWnd)

public:
    static void RegisterWndClazz();
    virtual bool CreateMe();

    DECLARE_MESSAGE_MAP()
};
