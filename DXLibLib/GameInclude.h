#pragma once
#include"Controller.h"
#include"Key.h"
#include"Mouse.h"
#include "Draw.h"
#include"Load.h"

class GameInclude :public Draw
{
public:
	GameInclude();
	~GameInclude();
	int ConCheck();
protected:
	void ControllerOn(bool on);
	void ParentInit();
	bool SceneChangeSeb(int seb);
	void Shake(COUNT& count, int num, Vector2 shakeMax);


	Controller* con = new Controller();
	Key* key = new Key();
	Mouse* mouse = new Mouse();
	Load*load = new Load();


	bool controllerOnly;
	bool drawScene;
	int loadCount;
	int pal;

	enum SCENE
	{
		INIT,
		OPENING,
		LOAD,
		UNLOAD,
		TITLE,
		TUTORIAL,
		PLAY,
		GAMEOVER,
		GAMECLEAR,
		RESULT,
		DEMO,
		DEMOINIT,
		SELECT,
		MAPSET,
		PLAYINIT,

	};
	int scene;

	Vector2 sc;
	Vector2 shake;
};

