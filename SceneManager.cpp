#include "SceneManager.h"

SceneManager::SceneManager()
{
	scene = &SceneOP::Instance();
}

void SceneManager::Input()
{
	Scene next = scene->Input(); // 1‰ñ‚¾‚¯ŒÄ‚Ô
	if (next != Scene::None)
	{
		ChangeScene(next);
		Update();
		Draw();
	}
}

void SceneManager::Update()
{
	scene->Update();
}

void SceneManager::Draw()
{
	scene->Draw();
}

void SceneManager::loop()
{
	Update();
	Draw();
	while (true)
	{
		Input(); // ‚±‚±‚Å‚ÍUpdate/Draw‚ğŒÄ‚Î‚È‚¢Bscene->Input()‚ªNoneˆÈŠO‚ğ•Ô‚µ‚½‚¾‚¯“à•”‚ÅŒÄ‚Î‚ê‚é
	}
}

void SceneManager::ChangeScene(Scene next)
{
	switch (next)
	{
	case Scene::None:
		break;
	case Scene::OP:
		scene = &SceneOP::Instance();
		break;
	case Scene::Play:
		scene = &ScenePlay::Instance();
		scene->Reset(); // © –ˆ‰ñSelectEnemy‚©‚çn‚Ü‚é‚æ‚¤‚É‚·‚é
		break;
	case Scene::End:
		scene = &SceneEnd::Instance();
		break;
	}
}