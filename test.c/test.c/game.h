#pragma once
#define ROW 3
#define COL 3
#include<stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<time.h>

//声明
void initboard(char board[ROW][COL], int row, int col);
void displayboard(char board[ROW][COL], int row, int col);
void playermove(char board[ROW][COL], int row, int col);
void Alicemove(char board[ROW][COL], int row, int col);
char win(char board[ROW][COL], int row, int col);



//win 返回'*'玩家赢
//		'#'Alice赢
//		'@'平局
//		'c'游戏继续还没有胜者