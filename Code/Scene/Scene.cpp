#include"Scene.h"
#include"TitleScene.h"
#include"GameScene.h"
#include"ClearScene.h"

TitleScene titleScene;
GameScene gameScene;
ClearScene clearScene;

int currentType = sceneTitle;	//シーンタイプ

void Scene::Execute()
{
	switch (currentType)
	{
	case sceneTitle:
		titleScene.Execute();
		break;
	case sceneGame:
		gameScene.Execute();
		break;
	case sceneClear:
		clearScene.Execute();
		break;
	}
}

void ExecuteScenetype()
{
	if (currentType == sceneTitle)
	{
		currentType = sceneGame;
	}
	else if (currentType == sceneGame)
	{
		currentType = sceneClear;
	}
	else if (currentType == sceneClear)
	{
		currentType = sceneTitle;
	}
}
