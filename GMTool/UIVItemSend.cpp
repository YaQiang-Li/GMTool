#include "TabHelper.h"
#include "UIVItemSend.h"
#include "CWindowBuilderCallbackEx.h"

using namespace DuiLib;

VItemsSendUI::VItemsSendUI(CPaintManagerUI *pPM)
{
	
	m_pm = pPM;
	m_pSendBtn = NULL;
}

void VItemsSendUI::DoInit()
{
	if (!CreateBuilder(m_pm, this, _T("v_items.xml")))
		return;

	InitDlg();
}

void VItemsSendUI::Notify(TNotifyUI& msg)
{
	if (!this->IsVisible())
		return;

	if (_tcsicmp(msg.sType, _T("click")) == 0)
	{
		if (msg.pSender == m_pSendBtn)
		{
			OutputDebugString("Click m_pSendBtn\n\n");
		}
	}
}

void VItemsSendUI::InitDlg()
{
	m_pSendBtn = static_cast<CButtonUI*>(m_pm->FindControl(_T("sendVItems")));
}