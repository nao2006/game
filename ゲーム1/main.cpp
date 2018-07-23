#include "DxLib.h"
#include "main.h"


//プログラムはwinmainから開始します
int WINAPI WinMain(HINSTANCE, HINSTANCE , LPSTR , int )
{

	while (ProcessMessage() != -1 && !CheckHitKey(KEY_INPUT_ESCAPE))
	{
		
		ClsDrawScreen();	// 画面を消去
		
		ScreenFlip();	// 新たな画面に更新
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