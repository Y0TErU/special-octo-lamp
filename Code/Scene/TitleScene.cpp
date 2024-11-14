#include <DxLib.h>
#include <math.h>
#include "Scene.h"
#include "TitleScene.h"

void TitleScene::Execute()
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

void TitleScene::Initialize()
{

	ExecuteSceneStep();
}

void TitleScene::Update()
{

	ClearDrawScreen();

	DrawCircle(300, 300, 100, GetColor(255, 255, 255), true);

	ScreenFlip();

	if (CheckHitKey(KEY_INPUT_RETURN))
	{
		ExecuteSceneStep();
	}
}

void TitleScene::Terminate()
{
	ExecuteSceneStep();
	ExecuteScenetype();
}

void TitleScene::ExecuteSceneStep()
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
