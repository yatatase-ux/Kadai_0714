#include "ScenePlay.h"

ScenePlay::ScenePlay()
{

}

Scene ScenePlay::Input()
{
	return Scene::End;
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