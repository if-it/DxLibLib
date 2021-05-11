#include "Load.h"



Load::Load()
{
}


Load::~Load()
{
}
void::Load::LoadTex(const TCHAR *name, int &tex)
{
	tex = LoadGraph(name);
	if (tex == -1)
	{
		MessageBox(NULL, "�摜�̃��[�h�G���[", "�G���[", MB_OK);
	}
}

int Load::LoadAnimeTex(const TCHAR * name, int AllNum, int XNum, int YNum, int XSize, int YSize, int tex[])
{
	int texs = -1;
	texs = LoadDivGraph(name, AllNum, XNum, YNum, XSize, YSize, tex);
	if (texs == 0)
	{
		return 0;
	}
	else
	{
		MessageBox(NULL, "�摜�̃��[�h�G���[", "�G���[", MB_OK);
		return -1;
	}
}


void Load::LoadSound(const TCHAR * name, int & sound)
{
	sound = LoadSoundMem(name);
	if (sound == -1)
	{
		MessageBox(NULL, "���t�@�C���̃��[�h�G���[", "�G���[", MB_OK);
	}
}

