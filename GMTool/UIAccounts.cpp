#include "TabHelper.h"
#include "UIAccounts.h"

AccountsUI::AccountsUI(CPaintManagerUI *pPM)
{
	m_pm = pPM;
}

void AccountsUI::DoInit()
{
// 	if (!CreateBuilder(m_pm, this, _T("accounts.xml")))
// 		return;
// 
// 	InitDlg();
}

void AccountsUI::Notify(TNotifyUI& msg)
{
	if (!this->IsVisible())
		return;

	if (_tcsicmp(msg.sType, _T("click")) == 0)
	{
// 		if (msg.pSender = m_pSendBtn)
// 		{
// 			OutputDebugString("Click m_pSendBtn\n\n");
// 		}
	}
}

void AccountsUI::InitDlg()
{
}