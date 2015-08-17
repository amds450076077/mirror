#ifndef ITEM_BASIC_H
#define ITEM_BASIC_H

#include <QWidget>
#include <QMenu>
#include "ui_item_base.h"
#include "ItemDefine.h"
#include "dlg_detail.h"


class Item_Base : public QWidget
{
	Q_OBJECT

public:
	Item_Base();
	~Item_Base();

	static	const Info_Item* FindItem_Item(quint32 ID);
	static	const Info_basic_equip* GetEquipBasicInfo(quint32 id);

protected:
	void ShowItemInfo_item(int row, int column, int curPage, const MapItem *items, quint32 role_voc, quint32 role_lvl);
	void ShowItemInfo_equip(int row, int column, int curPage, const ListEquip *items, const RoleInfo *roleInfo);

	QPoint CalcDlgPos(int row, int column);
	quint32 GetCurrentCellIndex(quint32 curPage);
	quint32 GetActiveCellIndex(quint32 curPage, quint32 row, quint32 col);
	quint32 GetItemID(int row, int column, int curPage, const MapItem *items);
	const Info_Equip *GetEquip(int row, int column, int curPage, const ListEquip *items);

	Ui::item_base ui;

signals:
	void UpdateEquipInfoSignals(void);
	void UpdatePlayerInfoSignals(void);

private:
};

#endif // ITEM_BASIC_H
