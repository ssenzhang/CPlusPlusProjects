#ifndef _NOTEPADMAINWND_H_
#define _NOTEPADMAINWND_H_

#include <afxwin.h>

class NotepadMainWnd : public CFrameWnd
{
public:
	NotepadMainWnd();
	virtual int OnCreate(LPCREATESTRUCT lpCreateStruct);
public:
	CMenu m_menu;
protected:
	afx_msg void OnPaint();
	DECLARE_MESSAGE_MAP();
};

#endif // _NOTEPADMAINWND_H_