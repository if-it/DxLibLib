#include"Game.h"
int WINAPI WinMain(
	_In_ HINSTANCE hInstance,
	_In_opt_ HINSTANCE hPrevInstance,
	_In_ LPSTR lpCmdLine,
	_In_ int nCmdShow
)
{
	const char WINDOW_NAME[] = "�e���v���[�g";
	//�E�B���h�E���[�h�ɐݒ�
	ChangeWindowMode(TRUE);
	//�E�B���h�E�T�C�Y���蓮�ł͕ύX�ł����A
	//���E�B���h�E�T�C�Y�ɍ��킹�Ċg��ł��Ȃ��悤�ɂ���
	SetWindowSizeChangeEnableFlag(FALSE, FALSE);
	SetMainWindowText(WINDOW_NAME);
	SetGraphMode(WIDTH, HEIGHT, 32);
	SetWindowSizeExtendRate(1.0);
	SetBackgroundColor(0, 0, 0);
	int FrameStartTime;
	Game* game = new Game();

	//Dx���C�u������������
	if (DxLib_Init() == -1)
	{
		//�G���[���o����}�C�i�X�l��Ԃ��ďI��
		return -1;
	}
	game->SystemInit();
	//�R���g���[���[���ڑ�����Ă��邩�H
	if (game->ConCheck() == -1)
	{
		//����ĂȂ��Ȃ�I��
		//Dx���C�u�����I������
		DxLib_End();
		return 0;
	}

	SetDrawScreen(DX_SCREEN_BACK);
	FrameStartTime = GetNowCount();
	game->FirstInit();

	
	while (1)
	{
		//��ʃN���A
		ClearDrawScreen();

		while (GetNowCount() - FrameStartTime < 1000 / 60) {}
		FrameStartTime = GetNowCount();

	
		game->Update();
		game->Draw();

		//����ʂ̕`���\��ʂɔ��f������
		ScreenFlip();

		if (ProcessMessage() == -1)break;
		if (CheckHitKey(KEY_INPUT_ESCAPE) == 1)break;
	}

	delete game;

	//Dx���C�u�����I������
	DxLib_End();
	return 0;
}