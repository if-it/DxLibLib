#include "Game.h"



Game::Game()
{
}


Game::~Game()
{
	delete con;
	delete key;
	delete mouse;
	InitGraph();
	InitSoundMem();
}

void Game::SystemInit()
{
	// マウスを表示状態にする？
	SetMouseDispFlag(TRUE);

	//コントローラーしか使えない？
	ControllerOn(false);
}



void Game::FirstInit()
{
	ParentInit();
	Init();
	scene = OPENING;
}

void Game::Init()
{
	sc = Vector2();
	shake = Vector2();
}

bool Game::Loading()
{
	if (loadCount > 0)return true;
	loadCount++;


	if (loadCount >= 0)return true;
	return false;
}

void Game::Update()
{
	switch (scene)
	{
	case OPENING:
		SetBackgroundColor(0xEF, 0xFF, 0xEF);
		scene = LOAD;
		break;
	case LOAD:
		if (Loading())
		{
			if (SceneChangeSeb(2))scene = PLAY;
		}
		break;
	case TITLE:

		break;
	case PLAY:

		PlayUpdate();
		break;
	default:
		break;
	}
}

void Game::PlayUpdate()
{
}

void Game::Draw()
{
	switch (scene)
	{
	case OPENING:
		break;
	case LOAD:
		break;
	case TITLE:

		break;
	case PLAY:
		break;
	default:
		break;
	}
	SetDrawBlendMode(DX_BLENDMODE_ALPHA, pal);
	Box(Vector2(), GetColor(0, 0, 0), drawScene, true, Vector2(), Vector2(), WIDTH, HEIGHT);
	SetDrawBlendMode(DX_BLENDMODE_NOBLEND, 0);
}



void Game::PlayDraw(Vector2 sc2, Vector2 shake2)
{
}
