#pragma once

class GameScene
{
public:
	void Execute();		//�Q�[���V�[���̑J��
	void Initialize();	//�Q�[���V�[���̏�����
	void Update();		//�Q�[���V�[���̍X�V
	void Terminate();	//�Q�[���V�[���̏I��

	void ExecuteSceneStep();	//�V�[���X�e�b�v�̍X�V

private:
	enum SceneStep			//�V�[�����̏�
	{
		sceneInit,			//�V�[���̏�����
		sceneUpdate,		//�V�[���̍X�V
		sceneTerminate,		//�V�[���̏I��
	};

	int currentStep = sceneInit;	//�V�[���X�e�b�v

};

