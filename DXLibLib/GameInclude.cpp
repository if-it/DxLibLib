#include "GameInclude.h"

GameInclude::GameInclude()
{
}

GameInclude::~GameInclude()
{
}

void GameInclude::ControllerOn(bool on)
{
	controllerOnly = on;
}

int GameInclude::ConCheck()
{
	if (controllerOnly)return con->Set();

	return 0;
}
void GameInclude::ParentInit()
{
	loadCount = 0;
	pal = 255;
	drawScene = true;
}

bool GameInclude::SceneChangeSeb(int seb)
{
	pal -= seb;
	drawScene = true;
	if (pal <= 0)
	{
		pal = 255;
		drawScene = false;
		return true;
	}
	return false;
}

void GameInclude::Shake(COUNT& count, int num, Vector2 shakeMax)
{
	if (count.flg)
	{
		shake = shakeMax;
	}
	count.Conuter(num);
}