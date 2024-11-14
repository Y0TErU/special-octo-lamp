#include "Player.h"
#include <DxLib.h>
#include <math.h>

Player::Player()
{
	isActive = true;
	posX = 100.0f;
	posY = 100.0f;
	handle = -1;
}

void Player::Load()
{
	handle = LoadGraph("Res/Object/Vaccine.png");
}

void Player::Update()
{

	if (isActive == true)
	{
		// Î‚ß“ü—Í–h~
		bool moving_x{ false };
		bool moving_y{ false };

		// ã¶‰EƒL[‚Ì“ü—Í‚ÅˆÚ“®‚·‚éˆ—‚ğÀ‘•
		if (CheckHitKey(KEY_INPUT_W) && moving_x == false)
		{
			posY -= speed;
			moving_y = true;
		}

		if (CheckHitKey(KEY_INPUT_S) && moving_x == false)
		{
			posY += speed;
			moving_y = true;
		}

		if (CheckHitKey(KEY_INPUT_A) && moving_y == false)
		{
			posX -= speed;
			moving_x = true;
		}

		if (CheckHitKey(KEY_INPUT_D) && moving_y == false)
		{
			posX += speed;
			moving_x = true;
		}
	}
}

void Player::Draw()
{
	if (isActive == true)
	{
		DrawGraph(posX, posY, handle, true);
	}
}

void Player::Delete()
{
	DeleteGraph(handle);
}
float Player::GetPosX()
{
	return posX;

}
float Player::GetPosY()
{
	return posY;

}

