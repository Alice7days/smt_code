#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

//����
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void Alicemove(char board[ROW][COL], int row, int col);
char win(char board[ROW][COL], int row, int col);



//win ����'*'���Ӯ
//		'#'AliceӮ
//		'@'ƽ��
//		'c'��Ϸ������û��ʤ��