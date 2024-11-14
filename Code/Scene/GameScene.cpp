#include <DxLib.h>
#include <math.h>
#include "Scene.h"
#include "GameScene.h"
#include "../Object/Player.h"
#include "../Object/Enemy.h"
#include "../Object/Stage.h"

// ï`âÊÇÃì«Ç›çûÇ›
int virus_handle = -1;
int vaccine_handle = -1;


Player vaccine;
Enemy virus;
Stage stage;

void GameScene::Execute()
{
	switch (currentStep)
	{
	case 0:
		Initialize();
		break;
	case 1:
		Update();
		break;
	case 2:
		Terminate();
		break;
	}
}

void GameScene::Initialize()
{
	vaccine.Load();
	virus.Load();

	ExecuteSceneStep();
}

void GameScene::Update()
{
	vaccine.Update();
	virus.Update(vaccine.GetPosX(),vaccine.GetPosY());

	ClearDrawScreen();

	stage.Draw();

	vaccine.Draw();
	virus.Draw();

	//DrawCircle(500, 500, 10, GetColor(255, 255, 255), true);

	ScreenFlip();

	if (CheckHitKey(KEY_INPUT_TAB))
	{
		ExecuteSceneStep();
	}
}

void GameScene::Terminate()
{
	vaccine.Delete();
	virus.Delete();

	ExecuteSceneStep();
	ExecuteScenetype();
}

void GameScene::ExecuteSceneStep()
{
	if (currentStep == sceneInit)
	{
		currentStep = sceneUpdate;
	}
	else if (currentStep == sceneUpdate)
	{
		currentStep = sceneTerminate;
	}
	else if (currentStep == sceneTerminate)
	{
		currentStep = sceneInit;
	}
}