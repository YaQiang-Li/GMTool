#pragma once
#include <windows.h>
#include "UIVItemSend.h"
#include "UIlib.h"

using namespace DuiLib;

template<typename T>
BOOL CreateBuilder(CPaintManagerUI *pPM, T *m_containerUI, LPCTSTR xml)
{
	CDialogBuilder builder;
	CContainerUI* pVItemSend = static_cast<CContainerUI*>(builder.Create(xml, (UINT)0));
	if (pVItemSend)
	{
		m_containerUI->Add(pVItemSend);
		pPM->AddNotifier(m_containerUI);
	}
	else
	{
		m_containerUI->RemoveAll();
		return FALSE;
	}
	return TRUE;
}