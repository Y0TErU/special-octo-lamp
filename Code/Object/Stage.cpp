#include <DxLib.h>
#include <math.h>
#include "Stage.h"

void Stage::Draw()
{
	for (int i{ 0 }; i < mapColumn; i++)
	{
		for (int j{ 0 }; j < mapRow; j++)
		{
			posX = j * blockSize + mapOffSetX;
			posY = i * blockSize + mapOffSetY;

			if (stage_Arrangement[i][j] == 0)
			{
				DrawBox(posX, posY, posX + blockSize, posY + blockSize, GetColor(255, 0, 0), true);
			}
			else if (stage_Arrangement[i][j] == 1)
			{
				DrawBox(posX, posY, posX + blockSize, posY + blockSize, GetColor(255, 75, 230), true);
			}
		}
	}
}