#pragma once

class Scene
{
public:
	void Execute();

};
void ExecuteScenetype();

enum SceneType
{
	sceneTitle,		//タイトルシーン
	sceneGame,		//ゲームシーン
	sceneClear,		//クリアシーン
};
