#include "SceneEnd.h"

CONSTRUCTOR(SceneEnd)
{

}

INPUT(SceneEnd)
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

UPDATE(SceneEnd)
{
	return Scene::None;
}

DRAW(SceneEnd)
{
	std::cout << "Space to Back Title\n";
	std::cout << std::endl;
}

RESET(SceneEnd);