#include "Enemy.h"
#include <DxLib.h>
#include <math.h>


Enemy::Enemy()
{
	isActive = true;
	posX = 200;
	posY = 200.0f;
	handle = -1;

}

void Enemy::Load()
{
	handle = LoadGraph("Res/Object/Virus.h");
}

void Enemy::Update(float x, float y)
{
	float length{ 0.0f };
	float vec_x{ 0.0f };
	float vec_y{ 0.0f };

	vec_x = posX - x;
	vec_y = posY - y;

	length = sqrtf(vec_x * vec_x + vec_y * vec_y);

	vec_x /= length;
	vec_y /= length;

	posX -= vec_x * speed;
	posY -= vec_y * speed;


}

void Enemy::Draw()
{
	if (isActive == true)
	{
		DrawGraph(posX, posY, handle, true);
	}
}

void Enemy::Delete()
{
	DeleteGraph(handle);
}