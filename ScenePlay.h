#pragma once
#include "SceneBase.h"
#include "EnemyFactory.h"
#include "Enemy.h"

class ScenePlay : public SceneBase
{
	SCENECLASS(ScenePlay);

private:
	Enemy* enemy;
	enum class Phase
	{
		SelectEnemy,
		OutEnemy
	};
	Phase phase;

public:

	void SelectPhase();

	Enemy* CreateEnemy(int enemyID);


};
