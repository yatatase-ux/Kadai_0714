#include "SceneEnd.h"

SceneEnd::SceneEnd()
{

}

Scene SceneEnd::Input()
{
	if (_kbhit())
	{
		int key = _getch();

		if (key == ' ')
		{
			return Scene::OP;
		}
	}
	return Scene::None;
}

Scene SceneEnd::Update()
{
	return Scene::None;
}

void SceneEnd::Draw()
{
	std::cout << "NOW ENDING!\n";
	std::cout << std::endl;
}