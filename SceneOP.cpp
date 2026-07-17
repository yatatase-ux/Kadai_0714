#include "SceneOP.h"

SceneOP::SceneOP()
{

}

Scene SceneOP::Input()
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

Scene SceneOP::Update()
{
	return Scene::None;
}

void SceneOP::Draw()
{
	std::cout << "NOW OPENING!\n";
}