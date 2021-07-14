// NotepadMainWnd.cpp

#include "NotepadMainWnd.h"
#include "resource.h"

BEGIN_MESSAGE_MAP(NotepadMainWnd, CFrameWnd)
	ON_WM_CREATE()
	ON_WM_PAINT()
END_MESSAGE_MAP()

NotepadMainWnd::NotepadMainWnd()
{
}

int NotepadMainWnd::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
	if (CFrameWnd::OnCreate(lpCreateStruct) == -1)
		return -1;

	m_menu.LoadMenu(IDR_MENU1);
	this->SetMenu(&m_menu);

	return 0;
}

void NotepadMainWnd::OnPaint()
{
	// ������С��ʱ���ͻ�����������Ϊ��ɫ
	if (!IsIconic())
	{
		CPaintDC dc(this);
		CRect rect;
		GetClientRect(rect);
		dc.FillSolidRect(rect, RGB(128, 128, 128));
	}
}

