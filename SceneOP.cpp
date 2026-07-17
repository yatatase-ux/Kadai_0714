#include "SceneOP.h"

SceneOP::SceneOP()
{

}

Scene SceneOP::Input()
{ 
	return Scene::Play;
}

Scene SceneOP::Update()
{
	return Scene::None;
}

void SceneOP::Draw()
{
	std::cout << "NOW OPENING!\n";
	std::cout << std::endl;
}