#include "Map.h"



Map::Map()
{
}


Map::~Map()
{
}

void Map::Init()
{
}

void Map::Update()
{
}

void Map::MapColl(OBJECT& chara, int sizeX, int sizeY, int SizeCut)
{
	//�㍶
	MapJub(MapPointer(chara.allVec, SizeCut + 1, SizeCut + 1, true, map), chara, 0);
	//��E
	MapJub(MapPointer(chara.allVec, sizeX - SizeCut - 1, SizeCut + 1, true, map), chara, 0);

	//����
	MapJub(MapPointer(chara.allVec, SizeCut + 1, sizeY - SizeCut - 1, true, map), chara, 1);
	//���E
	MapJub(MapPointer(chara.allVec, sizeX - SizeCut - 1, sizeY - SizeCut - 1, true, map), chara, 1);

	chara.allVec.AddPosY();

	//�E��
	MapJub(MapPointer(chara.allVec, sizeX - SizeCut - 1, SizeCut + 1, false, map), chara, 2);
	//�E��
	MapJub(MapPointer(chara.allVec, sizeX - SizeCut - 1, sizeY - SizeCut - 1, false, map), chara, 2);

	//����
	MapJub(MapPointer(chara.allVec, SizeCut + 1, SizeCut + 1, false, map), chara, 3);
	//����
	MapJub(MapPointer(chara.allVec, SizeCut + 1, sizeY - SizeCut - 1, false, map), chara, 3);

	chara.allVec.AddPosX();

}

void Map::MapJub(int mapPoint, OBJECT& chara, int XY)
{
	if (XY == 0) //Y��
	{

		switch (mapPoint)
		{

		default:
			break;
		}
	}
	else if (XY == 1) //Y��
	{

		switch (mapPoint)
		{

		default:
			break;
		}

	}

	else if (XY == 2)//X��
	{
		switch (mapPoint)
		{


		default:
			break;
		}
	}

	else if (XY == 3)//X��
	{
		switch (mapPoint)
		{


		default:
			break;
		}
	}
}

int Map::MapPointer(ALLVECTOR allvec, int x, int y, bool flg, int(*collMap)[MAPX])
{
	if (flg)return collMap[(int)((allvec.pos.y + allvec.vec.y + y) / SIZE)][(int)((allvec.pos.x + x) / SIZE)];
	else
	{
		return collMap[(int)((allvec.pos.y + y) / SIZE)][(int)((allvec.pos.x + allvec.vec.x + x) / SIZE)];
	}
}

void Map::Draw(Vector2 sc, Vector2 shake)
{
}