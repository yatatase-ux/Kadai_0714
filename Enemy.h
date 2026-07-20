#pragma once
#include "EnemyData.h"

// @brief 敵のクラス
// @details
// このクラスは敵の基本的な属性を持ち、敵の行動や状態を管理します。
class Enemy
{
public:
	EnemyData Data;

	Enemy(const EnemyData& data)
		: Data(data)
	{
	}
};
