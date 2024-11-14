#pragma once

class ClearScene
{
public:
	void Execute();		//クリアシーンの遷移
	void Initialize();	//クリアシーンの初期化
	void Update();		//クリアシーンの更新
	void Terminate();	//クリアシーンの終了

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