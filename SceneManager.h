#pragma once
#include <memory>
#include "SceneBase.h"
#include "SceneOP.h"
#include "ScenePlay.h"
#include "SceneEnd.h"

class SceneManager
{
	NONCPY(SceneManager);
	SINGLETON(SceneManager);

private:
	enum class Scene
	{
		TITLE,
		PLAY,
		END
	};

	SceneBase* scene = nullptr;
	Scene scene_num = Scene::TITLE;

public:

	void Update();

	void Draw();
};
