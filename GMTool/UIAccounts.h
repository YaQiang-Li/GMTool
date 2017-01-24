#pragma once

#include <windows.h>
#include "UIlib.h"

using namespace DuiLib;

class AccountsUI : public CContainerUI, public INotifyUI
{
public:
	AccountsUI(CPaintManagerUI *pPM);
	void DoInit();
	void Notify(TNotifyUI& msg);
	void InitDlg();

public:
	CPaintManagerUI* m_pm;
};