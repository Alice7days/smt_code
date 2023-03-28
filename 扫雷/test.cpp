#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void menu()
{
	printf("**************************\n");
	printf("***** 1.play  0.exit*****\n");
	printf("*************************\n");
}
void game()
{
	//雷的存储
	//1.布置好的雷的信息
	char mine[ROWS][COLS];
	//2.排查出来的雷的信息
	char show[ROWS][COLS];
	//初始化棋盘
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//打印棋盘
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//布置雷
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);
	//找雷
	Findmine(mine, show, ROW, COL);
}
	
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请输入0或者1 ：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("游戏开始\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("叫你选1或者0，你选别的是吧，布塔雅罗\n");
			Sleep(3000);
			break;

		}
	} while (input);
	return 0;
}