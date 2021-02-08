#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include"game.h"

void menu()
{
	printf("***************************\n");
	printf("********* 1.play  *********\n");
	printf("********* 0.exit  *********\n");
	printf("***************************\n");
}
void game()
{
	char ret ;
	char board[ROW][COL];//数据存储一个二维数组
	InitBoard( board, ROW, COL);//初始化棋盘  初始化为空格
	DispalyBoard( board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家下棋
		ret = Judge(board, ROW, COL);//判断是否胜利
		if (ret != 'C')
		{
			break;
		}
		DispalyBoard(board, ROW, COL);
		ComputerMove(board, ROW, COL);
		ret = Judge(board, ROW, COL);
		if (ret != 'C')
		{
			break;
		}
		DispalyBoard(board, ROW, COL);
	}
	if (ret == '*')
	{
		printf("玩家赢！\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢!\n");
	}
	else if (ret == 'Q')
	{
		printf("平局！\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("请输入0/1：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("输入错误，请重新选择！");
			break;
		}
	} while (input);

}