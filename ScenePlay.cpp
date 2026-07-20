#include "ScenePlay.h"

CONSTRUCTOR(ScenePlay)
{
	phase = Phase::SelectEnemy;
	enemy = nullptr;
}

INPUT(ScenePlay)
{
	if (_kbhit())
	{
		int key = _getch();
		if (key == ' ')
		{
			switch (phase)
			{
			case Phase::SelectEnemy:
				phase = Phase::OutEnemy;
				break;
			case Phase::OutEnemy:
				return Scene::End;
				break;
			}
		}
	}
	return Scene::None;
}

UPDATE(ScenePlay)
{
	switch (phase)
	{
	case Phase::SelectEnemy:
		if (enemy != nullptr)
		{
			phase = Phase::OutEnemy;
		}
		break;
	case Phase::OutEnemy:
		break;
	}
	return Scene::None;
}

DRAW(ScenePlay)
{
	switch (phase)
	{
	case Phase::SelectEnemy:
	{
		int ID = 0;
		std::cout << "Select EnemyID 1`4" << std::endl;
		std::cin >> ID;
		enemy = CreateEnemy(ID);
		phase = Phase::OutEnemy;
	}
	[[fallthrough]]; // ID‚ðŒˆ‚ß‚½‚»‚Ìê‚ÅOutEnemy‚Ì•\Ž¦‚às‚¤
	case Phase::OutEnemy:
		if (enemy != nullptr)
		{
			printf("%s HP:%d, ATK:%d, CriticalRate:%d, EXP:%d, Gold:%d\n",
				enemy->Data.Name,
				enemy->Data.HP,
				enemy->Data.ATK,
				enemy->Data.CriticalRate,
				enemy->Data.EXP,
				enemy->Data.Gold);
		}
		break;
	}
	std::cout << "Space to Next Scene" << std::endl;
	std::cout << std::endl;
}

void ScenePlay::SelectPhase()
{
}

Enemy* ScenePlay::CreateEnemy(int enemyID)
{
	if (enemyID > EnemyFactory::GetEnemyTableSize() || enemyID <= 0) return nullptr;
	return EnemyFactory::CreateEnemy(enemyID);
}

void ScenePlay::Reset()
{
	if (enemy != nullptr)
	{
		delete enemy;   // ‘O‰ñ•ª‚ÌEnemy‚ð‰ð•ú(ƒƒ‚ƒŠƒŠ[ƒN–hŽ~)
	}
	phase = Phase::SelectEnemy;
	enemy = nullptr;
}