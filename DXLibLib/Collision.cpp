#include "Collision.h"



Collision::Collision()
{
}


Collision::~Collision()
{
}
//��
bool Collision::Collsion(Vector2 pos, int sizeX, int sizeY, Vector2 poss, int size2X, int size2Y)
{
	if (pos.x <= poss.x + size2X && poss.x <= pos.x + sizeX && pos.y <= poss.y + size2Y && poss.y <= pos.y + sizeY)
	{
		return true;
	}
	return false;
}
//�_�Ɩ�
bool Collision::PointCollsion(Vector2 pos, int sizeX, int sizeY, Vector2 poss, int size2X, int size2Y)
{
	if (pos.x + sizeX <= poss.x + size2X && poss.x <= pos.x + sizeX && pos.y + sizeY <= poss.y + size2Y && poss.y <= pos.y + sizeY)
	{
		return true;
	}
	return false;
}
//��X�Ɩ�
bool Collision::LineCollsionX(Vector2 pos, int sizeX, int sizeY, Vector2 poss, int size2X, int size2Y)
{
	if (pos.x <= poss.x + size2X && poss.x <= pos.x + sizeX && pos.y + sizeY <= poss.y + size2Y && poss.y <= pos.y + sizeY)
	{
		return true;
	}
	return false;
}
//��Y�Ɩ�
bool Collision::LineCollsionY(Vector2 pos, int sizeY, int sizeX, Vector2 poss, int size2X, int size2Y)
{
	if (pos.y <= poss.y + size2X && poss.y <= pos.y + sizeY && pos.x <= poss.x + size2Y && poss.x <= pos.x + sizeX)
	{
		return true;
	}
	return false;
}



