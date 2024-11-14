#pragma once

class ClearScene
{
public:
	void Execute();		//�N���A�V�[���̑J��
	void Initialize();	//�N���A�V�[���̏�����
	void Update();		//�N���A�V�[���̍X�V
	void Terminate();	//�N���A�V�[���̏I��

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