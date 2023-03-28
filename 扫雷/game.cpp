#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols, char ret)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < ROWS; i++)
	{
		for (j = 0; j < COLS; j++)
		{
			board[i][j] = ret;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}


void Setmine(char board[ROWS][COLS], int row, int col)
{
	int count = EASY_COUNT;
	while(count)
	{
		//随机生成1~9的数
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int get_mine_count(char mine[ROWS][COLS], int x, int y)
{
	return mine[x - 1][y] +
	mine[x - 1][y - 1] +
	mine[x][y - 1] +
	mine[x + 1][y - 1] +
	mine[x + 1][y] +
	mine[x + 1][y + 1] +
	mine[x][y + 1] +
	mine[x - 1][y + 1] - 8 * '0';
}

void Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY_COUNT)
	{
		printf("请输入坐标:>");
		scanf("%d%d", &x, &y);
		//坐标合法
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("boom haha\n");
				Displayboard(mine, row, col);
				break;
			}//有雷炸死了
			else//没雷显示这个点周围九宫格的雷的数量
			{
				int count = get_mine_count(mine, x, y);
				show[x][y] = count + '0';
				Displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("坐标输入错误,请重新输入\n");
		}
	}
	if (win == row * col-EASY_COUNT)	
	{
		printf("恭喜勇者获得胜利\n");
		Displayboard(mine, row, col);
	}

}