#pragma once

class Player
{
public:
	Player();
	void Update();
	void Load();
	void Draw();
	void Delete();

	float GetPosX();
	float GetPosY();

private:
	float posX;
	float posY;
	bool isActive;
	int handle;
	float speed{ 4.0f };

};