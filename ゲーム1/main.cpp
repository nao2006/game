#include "DxLib.h"
#include "main.h"


//�v���O������winmain����J�n���܂�
int WINAPI WinMain(HINSTANCE, HINSTANCE , LPSTR , int )
{

	while (ProcessMessage() != -1 && !CheckHitKey(KEY_INPUT_ESCAPE))
	{
		
		ClsDrawScreen();	// ��ʂ�����
		
		ScreenFlip();	// �V���ȉ�ʂɍX�V
	}

	DxLib_End();

	return 0;
}

bool SystemInit(void)
{
	SetGraphMode(SCREEN_SIZE_X, SCREEN_SIZE_Y, 16);

	ChangeWindowMode(true);
	

	if (DxLib_Init() == - 1)
	{
		return false;
	}

	SetDrawScreen(DX_SCREEN_BACK);

	return true;
}