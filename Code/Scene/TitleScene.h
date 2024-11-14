#pragma once

class TitleScene
{
public:
	void Execute();		//�^�C�g���V�[���̑J��
	void Initialize();	//�^�C�g���V�[���̏�����
	void Update();		//�^�C�g���V�[���̍X�V
	void Terminate();	//�^�C�g���V�[���̏I��

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

