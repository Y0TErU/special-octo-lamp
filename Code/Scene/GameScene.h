#pragma once

class GameScene
{
public:
	void Execute();		//ゲームシーンの遷移
	void Initialize();	//ゲームシーンの初期化
	void Update();		//ゲームシーンの更新
	void Terminate();	//ゲームシーンの終了

	void ExecuteSceneStep();	//シーンステップの更新

private:
	enum SceneStep			//シーン内の状況
	{
		sceneInit,			//シーンの初期化
		sceneUpdate,		//シーンの更新
		sceneTerminate,		//シーンの終了
	};

	int currentStep = sceneInit;	//シーンステップ

};

