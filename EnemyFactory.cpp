#include "EnemyFactory.h"
#include "Enemy.h"

// 敵のデータを入力
const EnemyData EnemyFactory::EnemyTable[] = {
	{ 1, "Slime",   10,  5,  2, 1,  5,   10,    5, Element::None },
	{ 2, "Goblin",  20, 10,  5, 2,  5,   20,   10, Element::Earth },
	{ 3, "Orc",     30, 15,  8, 3, 10,   30,   15, Element::Fire },
	{ 4, "Dragon", 100, 50, 20, 5, 20, 1000, 1000, Element::Fire }
};

// @brief EnemyTableの要素数を計算
const int EnemyFactory::EnemytableSize = sizeof(EnemyTable) / sizeof(EnemyData);
// EnemyTableの総サイズをEnemyDataのサイズで割ることで、配列の要素数を出せる。
// (例) EnemyTableが 64B, EnemyDataが 16B の場合、EnemyTableには 4つのEnemyDataが入っていることになる。

Enemy* EnemyFactory::CreateEnemy(int ID)
{
	for (int i = 0; i < EnemytableSize; ++i) {
		if (EnemyTable[i].ID == ID) {
			return new Enemy(EnemyTable[i]);
		}
	}

	return nullptr;
}

int EnemyFactory::GetEnemyTableSize()
{
	return EnemytableSize;
}