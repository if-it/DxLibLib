#pragma once
#include"Structure.h"

class Draw :public Structure
{

protected:
	Draw();
	~Draw();

	void Box(Vector2 pos, unsigned int color, bool dis, bool flg = true,
		Vector2 shake = Vector2(), Vector2 sc = Vector2(), float sizeX = 32, float sizeY = 32);

	void Box(OBJECT chara, bool flg = true, Vector2 shake = Vector2(), Vector2 sc = Vector2(), float sizeX = 32, float sizeY = 32);

	void Circle(Vector2 pos, float r, int posnum, unsigned int color, bool dis, bool flg = true,
		Vector2 shake = Vector2(), Vector2 sc = Vector2());

	void Circle(OBJECT chara, float r, int posnum, bool flg = true, Vector2 shake = Vector2(), Vector2 sc = Vector2());

	void DrawTex(Vector2 pos, int tex, bool dis, bool flg = true, Vector2 shake = Vector2(), Vector2 sc = Vector2());

	void DrawTex(OBJECT chara, int tex, bool flg = true, Vector2 shake = Vector2(), Vector2 sc = Vector2());

	void DrawUpTex(Vector2 pos, Vector2 size, int tex, bool dis, bool flg = true, Vector2 shake = Vector2(), Vector2 sc = Vector2());

	void DrawRotaTex(Vector2 pos, Vector2 texPos, Vector2 up, float ang, int tex, bool dis,
		bool turn = false, bool flg = true, Vector2 shake = Vector2(), Vector2 sc = Vector2());

	void DrawRotaTex(OBJECT chara, int tex,
		bool flg = true, Vector2 shake = Vector2(), Vector2 sc = Vector2(), Vector2 size = Vector2(SIZE, SIZE), bool center = false);
};

