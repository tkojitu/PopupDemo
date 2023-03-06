#include "stdafx.h" 
#include "MyWnd.h" 

static CString s_wndclazz;

IMPLEMENT_DYNAMIC(MyWnd, CWnd)

BEGIN_MESSAGE_MAP(MyWnd, CWnd)
END_MESSAGE_MAP()

void MyWnd::RegisterWndClazz()
{
    if (!s_wndclazz.IsEmpty())
        return;
    s_wndclazz = AfxRegisterWndClass(
        CS_VREDRAW | CS_HREDRAW,
        ::LoadCursor(NULL, IDC_ARROW),
        (HBRUSH)::GetStockObject(WHITE_BRUSH),
        ::LoadIcon(NULL, IDI_APPLICATION));
}

bool MyWnd::CreateMe()
{
    RegisterWndClazz();
    return CreateEx(
        WS_EX_CLIENTEDGE,
        s_wndclazz,
        L"MyWnd",
        WS_POPUP | WS_VISIBLE,
        RECT{ 10, 10, 640, 480 },
        nullptr,
        0);
}
