#include "SceneEnd.h"

SceneEnd::SceneEnd()
{

}

Scene SceneEnd::Input()
{
	return Scene::None;
}

Scene SceneEnd::Update()
{
	return Scene::None;
}

void SceneEnd::Draw()
{
	std::cout << "NOW ENDING!\n";
}