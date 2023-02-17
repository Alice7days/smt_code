#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include "game.c"//没有引用会弹出外来代码无法用
void game()
{
	char board[ROW][COL] = { 0 };
	//初始化棋盘
	initboard(board, ROW, COL);//引用这个函数
	//打印棋盘
	displayboard(board, ROW, COL);
	//玩家移动
	char ret = 0;
	while (1)
	{
		//玩家走
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = win(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//电脑走
		Alicemove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = win(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("Alice赢\n");
	}
	else if(ret == 'q')
	{
		printf("平局\n");
	}

}
void menu()
{
	printf("*******************************\n");
	printf("*********1.play  0.exit********\n");
	printf("*******************************\n");
}
int main()
{
	srand((unsigned int)time(NULL));//设置一个rand函数的生成起点
	int i = 0;
	do
	{
		menu();
		printf("请输入： 0 或 1 \n");
		scanf("%d", &i);
		switch (i)
		{
		case 1:
		{
			printf("	link Start	\n");
			game();
			break;
		}
		case 0:
		{
			printf("	link OVER	\n");
			break;
		}
		default:
		{
			printf("叫你输入0或者1! 你输入别的是吧，布塔雅罗！\n");
			Sleep(3000);
			break;
		}
		}
	} while (i);
	return 0;
}