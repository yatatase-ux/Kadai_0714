#include "ScenePlay.h"

ScenePlay::ScenePlay()
{

}

Scene ScenePlay::Input()
{
	if (_kbhit())
	{
		int key = _getch();

		if (key == ' ')
		{
			return Scene::End;
		}
	}
	return Scene::None;
}

Scene ScenePlay::Update()
{
	return Scene::None;
}

void ScenePlay::Draw()
{
	std::cout << "NOW PLAYING!\n";
	std::cout << std::endl;
}