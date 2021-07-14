// NotepadApp.cpp

#include "NotepadApp.h"
#include "NotepadMainWnd.h"

NotepadApp notepadApp;

BOOL NotepadApp::InitInstance()
{
	NotepadMainWnd *notepadMainWnd = new NotepadMainWnd();
	notepadMainWnd->Create(NULL, _T("¼ÇÊÂ±¾"));
	notepadMainWnd->ShowWindow(SW_MAXIMIZE);
	notepadMainWnd->MoveWindow(250, 250, 1560, 980, FALSE);
	notepadMainWnd->UpdateWindow();

	this->m_pMainWnd = notepadMainWnd;

	return TRUE;
}