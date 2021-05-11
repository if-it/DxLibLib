#include "Structure.h"



Structure::Structure()
{
}


Structure::~Structure()
{
}



void Structure::SizeChange(COUNT & ani, Vector2&size, Vector2 change)
{
	if (ani.flg)
	{
		ani.count++;
		size.x += change.x;
		size.y += change.y;
	}
}

void Structure::AnimeEnd(COUNT & ani, int maxCount, Vector2&size, Vector2 sizeNum)
{
	if (ani.count == maxCount)
	{
		ani.count = 0;
		ani.flg = false;
		size = sizeNum;
	}
}

void Structure::SetBright(COLOR color)
{
	SetDrawBright(color.red, color.green, color.blue);
}

unsigned int Structure::MyGetColor(COLOR color)
{
	return GetColor(color.red, color.green, color.blue);
}
