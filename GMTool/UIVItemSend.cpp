#include "UIVItemSend.h"

VItemsSendUI::VItemsSendUI()
{
	CDialogBuilder builder;
	CContainerUI* pComputerExamine = static_cast<CContainerUI*>(builder.Create(_T("v_items.xml"), (UINT)0));
	if (pComputerExamine) {
		this->Add(pComputerExamine);
	}
	else {
		this->RemoveAll();
		return;
	}
}