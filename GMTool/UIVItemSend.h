#pragma once

#include <windows.h>
#include "UIlib.h"

using namespace DuiLib;

class VItemsSendUI : public CContainerUI, public INotifyUI
{
public:
	VItemsSendUI(CPaintManagerUI *pPM);
	void DoInit();
	void Notify(TNotifyUI& msg);
	void InitDlg();

public:
	CPaintManagerUI* m_pm;
	CButtonUI* m_pSendBtn;
};
