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
	char board[ROW][COL];//���ݴ洢һ����ά����
	InitBoard( board, ROW, COL);//��ʼ������  ��ʼ��Ϊ�ո�
	DispalyBoard( board, ROW, COL);
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		ret = Judge(board, ROW, COL);//�ж��Ƿ�ʤ��
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
		printf("���Ӯ��\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ!\n");
	}
	else if (ret == 'Q')
	{
		printf("ƽ�֣�\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input;
	do
	{
		menu();
		printf("������0/1��");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�������������ѡ��");
			break;
		}
	} while (input);

}