#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
void InitBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';

		}
	}

}
void DispalyBoard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if (j < col - 1)
			{
				printf("|");
			}
		}
		printf("\n");
		if (i < row - 1)
		{
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家走>");
   
	while (1)
	{
		 scanf("%d%d", &x, &y);
		if (x >= 0 && x <= row-1 && y >= 0 && y <= col-1)
		{
			if (board[x][y] != ' ')
			{
				printf("坐标被占用，请重新输入！");
			}
			else
			{
				board[x][y] = '*';
				break;
			}
		}
		else
		{
			printf("输入错误，请重新输入！\n");
		}

	}
}
void ComputerMove(char board[ROW][COL], int row, int col)
{
	printf("电脑走\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}
int Isfull(char board[ROW][COL],int row,int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
char Judge(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2]&&board[i][0]!=' ')
		{
			return board[i][0];
		}
	}
	for (i = 0; i <col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[0][i] !=' ')
		{
			return board[i][0];
		}
	}
    if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[0][0] !=' ')
		{
			return board[0][0];
		}
    else if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[2][0] !=' ')
		{
			return board[0][0];
		}
	else if (Isfull(board,row,col) == 1)
	{
		return 'Q';
	}
	 else return 'C';
}