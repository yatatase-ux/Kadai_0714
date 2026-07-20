#pragma once
#include "EnemyData.h"

class Enemy;

// @brief 敵の生成を担当するファクトリークラス
class EnemyFactory
{
	// @brief 敵のデータを格納するテーブル
	static const EnemyData EnemyTable[];
	// @brief 敵のデータテーブルのサイズ
	static const int EnemytableSize;

public:

	// @brief 指定された ID に基づいて敵を生成します。
	// @param [in] ID 敵の ID
	// @return 生成された敵のポインタ。ID が見つからなかった場合は nullptr を返します。
	// details
	// このメソッドは、指定された ID に基づいて敵を生成します。
	// ID が見つからなかった場合は nullptr を返します。
	static Enemy* CreateEnemy(int ID);

	static int GetEnemyTableSize();
};
