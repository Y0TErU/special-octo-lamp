#include <stdio.h>
#include <DxLib.h>
#include "Scene.h"
#include "ClearScene.h"

void ClearScene::Execute()
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

void ClearScene::Initialize()
{

	ExecuteSceneStep();
}

void ClearScene::Update()
{

	ClearDrawScreen();

	DrawCircle(300, 300, 100, GetColor(255, 255, 0.), true);

	ScreenFlip();

	if (CheckHitKey(KEY_INPUT_P))
	{
		ExecuteSceneStep();
	}
}

void ClearScene::Terminate()
{
	ExecuteSceneStep();
	ExecuteScenetype();
}

void ClearScene::ExecuteSceneStep()
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