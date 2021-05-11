#include "Vector.h"
using namespace vector;
Vector2::Vector2()
{
	this->x = 0;
	this->y = 0;
}
Vector2::Vector2(float x, float y)
{
	this->x = x;
	this->y = y;
}

void Vector2::Normalize()
{
	//�Ăяo�����\���̂̃x�N�g���̑傫���ł��Ƃ������������ĒP�ʃx�N�g�����擾
	float length = sqrtf((x*x) + (y*y));
	this->x /= length;
	this->y /= length;
}

float Vector2::Distance(Vector2 a, Vector2 b)
{
	//��_�Ԃ̋������擾
	return sqrtf((a.x - b.x)*(a.x - b.x) + (a.y - b.y)*(a.y - b.y));
}

float Vector2::Cross(Vector2 objPos, Vector2 lineBeginPos, Vector2 lineEndPos)
{
	//�����̃x�N�g���������擾��
	//�O�ς����߂�
	Vector2 v1 = lineBeginPos - lineEndPos;
	Vector2 v2 = lineEndPos - objPos;
	return{ v1.x*v2.y - v2.x*v1.y };
}

float Vector2::Dot(Vector2 objPos, Vector2 lineBeginPos, Vector2 lineEndPos)
{
	//�����̃x�N�g���������擾��
	//�I�u�W�F�N�g�̃x�N�g���𐳋K�������l������ς����߂�
	Vector2 v1 = lineBeginPos - lineEndPos;
	Vector2 v2 = lineEndPos - objPos;
	v2.Normalize();
	return { v1.x*v2.x + v1.y*v2.y };
}

Vector2 vector::Vector2::Lerp(Vector2 a, Vector2 b, float c)
{
	//��_�Ԃ�c�̊����̈ʒu�����߂�B
	//0.5�Ȃ��_�Ԃ�1/2�̈ʒu�@0.25�Ȃ�1/4�̈ʒu
	//unity�Ŏg����������ꂽ
	Vector2 v1 = a * (1 - c);


	return { v1 + b * c };
}

Vector2 Vector2::operator+(Vector2 objPos)
{
	return { x + objPos.x,y + objPos.y };
}

Vector2 Vector2::operator-(Vector2 objPos)
{
	return { x - objPos.x,y - objPos.y };
}

Vector2 vector::Vector2::operator+=(Vector2 objPos)
{
	return { x += objPos.x,y += objPos.y };
}

Vector2 vector::Vector2::operator-=(Vector2 objPos)
{
	return { x -= objPos.x,y -= objPos.y };
}

Vector2 vector::Vector2::operator*(Vector2 objPos)
{
	return  { x *objPos.x,y * objPos.y };
}

Vector2 vector::Vector2::operator*=(Vector2 objPos)
{
	return { x *= objPos.x,y *= objPos.y };
}

Vector2 vector::Vector2::operator=(Vector2 objPos)
{
	return { x = objPos.x,y = objPos.y };
}




const Vector2 vector::Vector2::operator-(Vector2 const & objPos) const
{
	return { x - objPos.x,y - objPos.y };
}
const Vector2 vector::Vector2::operator+(int const & objpos) const
{
	return { x + objpos,y + objpos };
}
const Vector2 vector::Vector2::operator-(int const & objpos) const
{
	return { x - objpos,y - objpos };
}

const Vector2 vector::Vector2::operator*(float a) const
{
	return { x * a,y * a };
}

const Vector2 vector::Vector2::operator/(float a) const
{
	return { x / a,y / a };
}

Vector2 vector::Vector2::operator+=(float a)
{
	return { x += a,y += a };
}

Vector2 vector::Vector2::operator-=(float a)
{
	return { x -= a,y -= a };
}

Vector2 vector::Vector2::operator*=(float a)
{
	return { x *= a, y *= a };
}

bool vector::Vector2::operator<(Vector2 a)
{
	if (x < a.x && y < a.y)
	{
		return true;
	}
	return false;
}

bool vector::Vector2::operator>(Vector2 a)
{
	if (x > a.x && y > a.y)
	{
		return true;
	}
	return false;
}

bool vector::Vector2::operator<=(Vector2 a)
{
	if (x <= a.x && y <= a.y)
	{
		return true;
	}
	return false;
}

bool vector::Vector2::operator>=(Vector2 a)
{
	if (x >= a.x && y >= a.y)
	{
		return true;
	}
	return false;
}

bool vector::Vector2::operator==(Vector2 objPos)
{
	if (x == objPos.x&&y == objPos.y)
	{
		return true;
	}
	return false;
}

bool vector::Vector2::operator!=(Vector2 objPos)
{
	if (x != objPos.x&&y != objPos.y)
	{
		return true;
	}
	return false;
}