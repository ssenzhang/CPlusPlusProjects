// NotepadMainWnd.cpp

#include "NotepadMainWnd.h"
#include "resource.h"

BEGIN_MESSAGE_MAP(NotepadMainWnd, CFrameWnd)
	ON_WM_CREATE()
	ON_WM_PAINT()
END_MESSAGE_MAP()

NotepadMainWnd::NotepadMainWnd()
{
	m_menu.LoadMenu(IDR_MENU1);
}

int NotepadMainWnd::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	if (m_menu)
		this->SetMenu(&m_menu);

	return 0;
}



void NotepadMainWnd::OnPaint()
{
	// 不是最小化时，客户区背景设置为灰色
	if (!IsIconic())
	{
		CPaintDC dc(this);
		CRect rect;
		GetClientRect(rect);
		dc.FillSolidRect(rect, RGB(128, 128, 128));
	}
}

