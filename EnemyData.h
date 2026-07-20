#pragma once
#include "Element.h"

// @briesf 敵データを表す構造体
// @details
// この構造体は敵の基本的な属性を格納します
struct EnemyData
{
	int ID;
	const char Name[256];
	int HP;
	int ATK;
	int DEF;
	int SPD;
	int CriticalRate;
	int Gold;
	int EXP;
	Element Element;
};
