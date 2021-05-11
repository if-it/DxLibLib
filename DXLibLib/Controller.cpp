#include "Controller.h"

Controller::Controller()
{
}


Controller::~Controller()
{
}

void Controller::Init()
{
	for (int i = 0;i < 15;i++)
	{
		botton[i] = false;
		flame[i] = 0;
	}
	LTrigger = false;
	RTrigger = false;
	stickLY = false;
	stickLX = false;
	stickRY = false;
	stickRX = false;

}
//ŒÄ‚Î‚È‚¢‚ÆŽg‚¦‚È‚¢I
void Controller::Input()
{
	GetJoypadXInputState(DX_INPUT_PAD1, &input);
}
int Controller::Set()
{
	
	if (GetJoypadNum() <= 0)
	{
		return -1;
	}
	
	return 0;
}

bool Controller::TrlggerBotton(Botton bot)
{
	if (input.Buttons[(int)bot] == 0)
	{
		// ‰Ÿ‚³‚ê‚Ä‚¢‚È‚¢ 
		botton[(int)bot] = false;
	}
	else if (!botton[(int)bot])
	{
		// ‰Ÿ‚³‚ê‚Ä‚¢‚é
		botton[(int)bot] = true;
		return true;
	}
	return false;
}
int Controller::FlameBotton(Botton bot)
{
	if (input.Buttons[bot] == 0)
	{
		// ‰Ÿ‚³‚ê‚Ä‚¢‚È‚¢ 
		flame[bot] = 0;
		botton[bot] = false;
	}
	else
	{
		// ‰Ÿ‚³‚ê‚Ä‚¢‚é
		botton[bot] = true;
		flame[bot]++;
		return flame[bot];
	}
	return flame[bot];
}

vector::Vector2 Controller::StickL()
{
	return Vector2(input.ThumbLX, input.ThumbLY);
}

int Controller::StickLTriggerX()
{
	if (input.ThumbLX == 0)
	{
		stickLX = true;
	}
	if (input.ThumbLX > 0 && stickLX)
	{
		stickLX = false;
		return 1;
	}
	if (input.ThumbLX < 0 && stickLX)
	{
		stickLX = false;
		return -1;
	}
	return 0;
}

int Controller::StickLTriggerY()
{
	if (input.ThumbLY == 0)
	{
		stickLY = true;
	}
	if (input.ThumbLY < 0 && stickLY)
	{
		stickLY = false;
		return 1;
	}
	if (input.ThumbLY > 0 && stickLY)
	{
		stickLY = false;
		return -1;
	}
	return 0;
}



vector::Vector2 Controller::StickR()
{

	return Vector2(input.ThumbRX, input.ThumbRY);
}

int Controller::StickRTriggerX()
{
	if (input.ThumbRX == 0)
	{
		stickRX = true;
	}
	if (input.ThumbRX > 0 && stickRX)
	{
		stickRX = false;
		return 1;
	}
	if (input.ThumbRX < 0 && stickRX)
	{
		stickRX = false;
		return -1;
	}
	return 0;
}

int Controller::StickRTriggerY()
{
	if (input.ThumbRY == 0)
	{
		stickRY = true;
	}
	if (input.ThumbRY > 0 && stickRY)
	{
		stickRY = false;
		return 1;
	}
	if (input.ThumbRY < 0 && stickRY)
	{
		stickRY = false;
		return -1;
	}
	return 0;
}



int Controller::LTriggerF()
{
	if (input.LeftTrigger == 0)
	{
		LFlame = 0;
		LTrigger = false;
	}
	else
	{
		LTrigger = true;
		LFlame++;
	}
	return LFlame;
}

int Controller::RTriggerF()
{
	if (input.RightTrigger == 0)
	{
		RFlame = 0;
		RTrigger = false;
	}
	else
	{
		RTrigger = true;
		RFlame++;
	}
	return RFlame;
}

bool Controller::LTriggerT()
{
	if (input.LeftTrigger == 0)
	{
		LTrigger = false;
	}
	else if (!LTrigger)
	{
		LTrigger = true;
		return true;
	}
	return false;
}

bool Controller::RTriggerT()
{
	if (input.RightTrigger == 0)
	{
		RTrigger = false;
	}
	else if (!RTrigger)
	{
		RTrigger = true;
		return true;
	}
	return false;
}

int Controller::CheckHitAllBotton()
{
	int i;
	for (i = 0; i < 16; i++)
	{
		if (input.Buttons[i] == 0)
		{
			botton[i] = false;
		}
		else if (!botton[i])
		{
			botton[i] = true;
			return true;
		}
	}
	return false;
}

void Controller::Shake(int power, int time)
{
	StartJoypadVibration(DX_INPUT_PAD1, power, time);
}

void Controller::StopShake()
{
	StopJoypadVibration(DX_INPUT_PAD1);
}