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
	//�׵Ĵ洢
	//1.���úõ��׵���Ϣ
	char mine[ROWS][COLS];
	//2.�Ų�������׵���Ϣ
	char show[ROWS][COLS];
	//��ʼ������
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	//��ӡ����
	//Displayboard(mine, ROW, COL);
	Displayboard(show, ROW, COL);
	//������
	Setmine(mine, ROW, COL);
	//Displayboard(mine, ROW, COL);
	//����
	Findmine(mine, show, ROW, COL);
}
	
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("������0����1 ��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("��Ϸ��ʼ\n");
			game();
			break;
		case 0:
			break;
		default:
			printf("����ѡ1����0����ѡ����ǰɣ���������\n");
			Sleep(3000);
			break;

		}
	} while (input);
	return 0;
}