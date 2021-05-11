#pragma once
#include"Draw.h"
class Map :public Draw
{
public:
	Map();
	~Map();
	void Init();
	void Update();
	void MapColl(OBJECT& chara, int sizeX, int sizeY, int SizeCut);
	void Draw(Vector2 sc, Vector2 shake);
	int map[MAPY][MAPX];
private:
	void MapJub(int mapPoint, OBJECT& chara, int XY);
	int MapPointer(ALLVECTOR allvec, int x, int y, bool flg, int(*collMap)[MAPX]);
};

