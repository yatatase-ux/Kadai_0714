#include "SceneManager.h"

SceneManager::SceneManager()
{
	scene = &SceneOP::Instance();
}

void SceneManager::Input()
{
	//if (_kbhit())
	//{
	//	int key = _getch();

	//	if (key == ' ')
	//	{
	//		ChangeScene(scene->Input()); 
	//		Update();
	//		Draw();
	//	}

	//}

	if(scene->Input() != Scene::None)
	{
		ChangeScene(scene->Input());
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
	while(true)
	{
		Input();
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
		break;
	case Scene::End:
		scene = &SceneEnd::Instance();
		break;
	}
}