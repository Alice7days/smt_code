#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
#include "game.c"//û�����ûᵯ�����������޷���
void game()
{
	char board[ROW][COL] = { 0 };
	//��ʼ������
	initboard(board, ROW, COL);//�����������
	//��ӡ����
	displayboard(board, ROW, COL);
	//����ƶ�
	char ret = 0;
	while (1)
	{
		//�����
		playermove(board, ROW, COL);
		displayboard(board, ROW, COL);
		ret = win(board,ROW,COL);
		if (ret != 'c')
		{
			break;
		}
		//������
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
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("AliceӮ\n");
	}
	else if(ret == 'q')
	{
		printf("ƽ��\n");
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
	srand((unsigned int)time(NULL));//����һ��rand�������������
	int i = 0;
	do
	{
		menu();
		printf("�����룺 0 �� 1 \n");
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
			printf("��������0����1! ���������ǰɣ��������ޣ�\n");
			Sleep(3000);
			break;
		}
		}
	} while (i);
	return 0;
}