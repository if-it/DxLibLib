#pragma once
#include<math.h>
namespace vector
{
	struct Vector2
	{
	public:
#pragma region �ϐ�
		float x;
		float y;
#pragma endregion

#pragma region �R���X�g���N�^
		Vector2();
		Vector2(float x, float y);
#pragma endregion

#pragma region �֐�
		static float Distance(Vector2 a, Vector2 b);
		static float Cross(Vector2 objPos, Vector2 lineBeginPos, Vector2 lineEndPos);
		static float Dot(Vector2 objPos, Vector2 lineBeginPos, Vector2 lineEndPos);
		static Vector2 Lerp(Vector2 a, Vector2 b, float c);
		void Normalize();
#pragma endregion

#pragma region ��r���Z
		Vector2 operator + (Vector2 objPos);
		Vector2 operator - (Vector2 objPos);
		Vector2 operator += (Vector2 objPos);
		Vector2 operator -= (Vector2 objPos);
		Vector2 operator * (Vector2 objPos);
		Vector2 operator *= (Vector2 objPos);
		Vector2 operator = (Vector2 objPos);


		const Vector2 operator -(Vector2 const &objPos) const;
		const Vector2 operator +(int const &objpos) const;
		const Vector2 operator -(int const &objpos) const;
		const Vector2 operator *(float a) const;
		const Vector2 operator /(float a)const;
		Vector2 operator +=(float a);
		Vector2 operator -=(float a);
		Vector2 operator *=(float a);
		bool operator < (Vector2 a);
		bool operator > (Vector2 a);
		bool operator <= (Vector2 a);
		bool operator >= (Vector2 a);
		bool operator == (Vector2 objPos);
		bool operator != (Vector2 objPos);
#pragma endregion

	};
}
