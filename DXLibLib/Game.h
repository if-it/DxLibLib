#pragma once
#include"GameInclude.h"
class Game:public GameInclude
{
	using Vector2 = vector::Vector2;
public:
	Game();
	~Game();
	void SystemInit();
	void FirstInit();
	void Init();
	bool Loading();
	void Update();
	void Draw();
private:
	void PlayUpdate();
	void PlayDraw(Vector2 sc2, Vector2 shake2);
	int tex;
};

