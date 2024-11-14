#pragma once

class TitleScene
{
public:
	void Execute();		//タイトルシーンの遷移
	void Initialize();	//タイトルシーンの初期化
	void Update();		//タイトルシーンの更新
	void Terminate();	//タイトルシーンの終了

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

