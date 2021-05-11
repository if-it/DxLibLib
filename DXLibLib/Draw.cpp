#include "Draw.h"



Draw::Draw()
{
}


Draw::~Draw()
{
}

//�l�p�̕`��
void Draw::Box(Vector2 pos, unsigned int color, bool dis, bool flg, Vector2 shake, Vector2 sc, float sizeX, float sizeY)
{
	if (dis) DrawBoxAA(pos.x - sc.x + shake.x, pos.y - sc.y + shake.y,
		pos.x - sc.x + shake.x + sizeX + 1, pos.y - sc.y + shake.y + sizeY + 1, color, flg);
}

void Draw::Box(OBJECT chara, bool flg, Vector2 shake, Vector2 sc, float sizeX, float sizeY)
{
	if (chara.dis) DrawBoxAA(chara.allVec.pos.x - sc.x + shake.x, chara.allVec.pos.y - sc.y + shake.y,
		chara.allVec.pos.x - sc.x + shake.x + sizeX + 1, chara.allVec.pos.y - sc.y + shake.y + sizeY + 1, MyGetColor(chara.color), flg);
}

void Draw::Circle(Vector2 pos, float r, int posnum, unsigned int color, bool dis, bool flg, Vector2 shake, Vector2 sc)
{
	//�~�̕`��
	if (dis)DrawCircleAA(pos.x - sc.x + shake.x, pos.y - sc.y + shake.y, r, posnum, color, flg);
}

void Draw::Circle(OBJECT chara, float r, int posnum, bool flg, Vector2 shake, Vector2 sc)
{
	if (chara.dis)DrawCircleAA(chara.allVec.pos.x - sc.x + shake.x, chara.allVec.pos.y - sc.y + shake.y, r, posnum, MyGetColor(chara.color), flg);
}

//�摜�̒ʏ�`��
void Draw::DrawTex(Vector2 pos, int tex, bool dis, bool flg, Vector2 shake, Vector2 sc)
{
	if (dis)DrawGraphF(pos.x - sc.x + shake.x, pos.y - sc.y + shake.y, tex, flg);
}

void Draw::DrawTex(OBJECT chara, int tex, bool flg, Vector2 shake, Vector2 sc)
{
	if (chara.dis)DrawGraphF(chara.allVec.pos.x - sc.x + shake.x, chara.allVec.pos.y - sc.y + shake.y, tex, flg);
}

void Draw::DrawUpTex(Vector2 pos, Vector2 size, int tex, bool dis, bool flg, Vector2 shake, Vector2 sc)
{
	//�摜�̊g��k���`��
	if (dis)DrawExtendGraphF(pos.x - sc.x + shake.x, pos.y - sc.y + shake.y,
		pos.x + size.x + 1 - sc.x + shake.x, pos.y + size.y + 1 - sc.y + shake.y, tex, flg);
}

//�摜�̊g��k���A��]�A���]�`��
void Draw::DrawRotaTex(Vector2 pos, Vector2 texPos, Vector2 up, float ang, int tex, bool dis, bool turn, bool flg, Vector2 shake, Vector2 sc)
{
	if (dis)DrawRotaGraph3F(pos.x - sc.x + shake.x, pos.y - sc.y + shake.y, texPos.x, texPos.y, up.x, up.y, PI / 180 * ang, tex, flg, turn);
}

void Draw::DrawRotaTex(OBJECT chara, int tex, bool flg, Vector2 shake, Vector2 sc, Vector2 size, bool center)
{
	if (!center)
	{
		if (chara.dis)DrawRotaGraph3F(chara.allVec.pos.x + size.x / 2 - sc.x + shake.x, chara.allVec.pos.y + size.y / 2 - sc.y + shake.y,
			size.x / 2, size.y / 2, chara.size.x, chara.size.y, PI / 180 * chara.rote, tex, flg, chara.lr);
	}
	else
	{
		if (chara.dis)DrawRotaGraph3F(chara.allVec.pos.x - sc.x + shake.x, chara.allVec.pos.y - sc.y + shake.y,
			size.x / 2, size.y / 2, chara.size.x, chara.size.y, PI / 180 * chara.rote, tex, flg, chara.lr);
	}

}
