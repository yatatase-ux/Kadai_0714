#include "SceneOP.h"

CONSTRUCTOR(SceneOP)
{

}

INPUT(SceneOP)
{
	if (_kbhit())
	{
		int key = _getch();

		if (key == ' ')
		{
			return Scene::Play;
		}
	}
	return Scene::None;
}

UPDATE(SceneOP)
{
	return Scene::None;
}

DRAW(SceneOP)
{
	std::cout << "SPACE TO START\n";
	std::cout << std::endl;
}

RESET(SceneOP);