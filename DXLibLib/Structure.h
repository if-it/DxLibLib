#pragma once
#include"Parent.h"
class Structure
{
public:
	Structure();
	~Structure();
protected:
	struct ALLVECTOR
	{
		Vector2 pos;
		Vector2 vec;
		Vector2 ang;

		ALLVECTOR(Vector2 poss = Vector2(), Vector2 vecs = Vector2(), Vector2 angs = Vector2())
		{
			pos = poss;
			vec = vecs;
			ang = angs;
		}
		void AddPos()
		{
			pos += vec;
		}
		void AddPosX()
		{
			pos.x += vec.x;
		}
		void AddPosY()
		{
			pos.y += vec.y;
		}
	};
	struct COUNT
	{
		int count;
		bool flg;
		COUNT(bool flgSet = false)
		{
			count = 0;
			flg = flgSet;
		}
		void Conuter(int maxCount)
		{
			if (flg)
			{
				count++;
				if (count >= maxCount)
				{
					flg = false;
					count = 0;
				}
			}
		}
	};
	struct ANIMATION
	{
		COUNT count;
		int num;
		ANIMATION()
		{
			count = COUNT(true);
			num = 0;
		}
		void Animation(int maxCount, int maxNum)
		{
			if (!count.flg)
			{
				count.flg = true;
				num++;
				if (num == maxNum)
				{
					num = 0;
				}
			}
			count.Conuter(maxCount);
		}
	};
	struct COLOR
	{
		int red;
		int green;
		int blue;
		COLOR(int r = 0, int g = 0, int b = 0)
		{
			red = r;
			green = g;
			blue = b;
		}
	};


	struct OBJECT
	{
		ALLVECTOR allVec;
		COLOR color;
		Vector2 size;
		bool dis;
		bool lr;
		float rote;
		float pal;

		OBJECT(bool disFlg = true)
		{
			allVec = ALLVECTOR();
			color = COLOR();
			size = Vector2(1.0f, 1.0f);
			dis = disFlg;
			lr = false;
			rote = 0;
			pal = 255;
		}

	};
	void SizeChange(COUNT &count, Vector2&size, Vector2 change);
	void AnimeEnd(COUNT&ani, int maxCount, Vector2&size, Vector2 sizeNum);
	void SetBright(COLOR color = COLOR(255, 255, 255));
	unsigned int MyGetColor(COLOR color);
};

