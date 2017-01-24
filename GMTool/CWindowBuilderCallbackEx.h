#pragma once

#include <windows.h>
#include "UIlib.h"

#include "StringHleper.h"
#include "TabHelper.h"

#include "UIAccounts.h"
#include "UIVItemSend.h"

class CWindowBuilderCallbackEx : public IDialogBuilderCallback
{
public:

	CWindowBuilderCallbackEx(CPaintManagerUI *pPM)
	{
		m_pPM = pPM;
	}

	CControlUI* CreateControl(LPCTSTR pstrClass)
	{
		if (_tcscmp(pstrClass, _T("VItemsSend")) == 0) return new VItemsSendUI(m_pPM);
		if (_tcscmp(pstrClass, _T("Accounts")) == 0) return new AccountsUI(m_pPM);
		return NULL;
	}

protected:
	CPaintManagerUI *m_pPM;
};
