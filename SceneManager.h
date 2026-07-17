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

	SceneBase* scene = nullptr;

public:

	void Input();

	void Update();

	void Draw();

	void loop();

	void ChangeScene(Scene next);
};
