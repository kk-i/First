define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
//int main() 
//{
//	
//	int arr[10],tmp;
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	for (int i = 9; i >= 0; i--)
//	{
//		for (int j = 0; j < i; j++)
//		{
//			if (arr[i] < arr[j])
//			{
//				tmp = arr[j];
//				arr[j] = arr[i];
//				arr[i] = tmp;
//			}
//		}
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d  ", arr[i]);
//	}
//	return 0;
//}


// �������
//int main()
//{
//	int l = 0;
//	scanf("%d", &l);
//	int i = 0;
//	for (i = 0; i < l; i++)
//	{
//		int j = 0;
//		for (j = 0; j < l-1-i; j++)
//		{
//			printf(" ");
//		}
//		for (i = 0; j < 2*i+1; j++)
//		{
//			printf("*");
//	    }
//		printf("\n");
//	}
//	for (i = 0; i < l-1; i++)
//	{
//		int m = 0;
//		for (m = 0; m < i; m++)
//		{
//			printf(" ");
//		}
//		for (i = 0; i < 2*(l-1-i)-1; i++)
//		{
//			printf("*");
//		}
//		printf("\n");
//	}
//	return 0;
//}

////����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
//int  init(int *p)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		*(p+i) = 0;
//	}
//	return *p;
//}
//void print(int *p)
//{
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d  ", *(p+i));
//	}
//}
//int  reverse(int *p,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = *(p + right);
//		*(p + right) = *(p + left);
//		*(p + left) = tmp;
//		left++;
//		right--;
//	}
//	return *p;
//}
//int main()
//{
//	int arr[10];
//	init(arr);
//	print(arr);
//	printf("������鸳ֵ��");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	print(arr);
//	printf("\n");
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	reverse(arr,sz);
//	print(arr);
//	return 0;
//}


//�������������ֵ��
//int main()
//{
//	int arr[10],brr[10];
//	printf("������A�����ֵ");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	printf("������B�����ֵ");
//	for (int i = 0; i < 10; i++)
//	{
//		scanf("%d", &brr[i]);
//	}
//	for (int i = 0; i < 10; i++)
//	{
//		int tmp = arr[i];
//		arr[i] = brr[i];
//		brr[i] = tmp;
//	}
//	printf("���A�����ֵ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	printf("���B�����ֵ");
//	for (int i = 0; i < 10; i++)
//	{
//		printf("%d ", brr[i]);
//	}
//
//	return 0;
//}

// �ú���ʵ��
//void SWAP(int arr[],int brr[] )
//{
//
//	for (int i = 0; i < 10; i++)
//			{
//				int tmp = arr[i];
//				arr[i] = brr[i];
//				brr[i] = tmp;
//			}
//			printf("���A�����ֵ");
//			for (int i = 0; i < 10; i++)
//			{
//				printf("%d ", arr[i]);
//			}
//			printf("\n");
//			printf("���B�����ֵ");
//			for (int i = 0; i < 10; i++)
//			{
//				printf("%d ", brr[i]);
//			}
//
//}
//int main()
//{
//	int arr[10], brr[10];
//		printf("������a�����ֵ");
//		for (int i = 0; i < 10; i++)
//		{
//			scanf("%d", &arr[i]);
//		}
//		printf("������b�����ֵ");
//		for (int i = 0; i < 10; i++)
//		{
//			scanf("%d", &brr[i]);
//		}
//		SWAP(arr, brr);
//
//}
//
