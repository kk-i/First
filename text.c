#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//�ݹ�ʵ�ֽ׳�
//int  Fun(int a)
//{	
//	if(a<=1)
//	{
//		return 1;
//	}
//	else return Fun(a - 1) * a;
//}
//int main()
//{
//	int sum,n;
//	scanf("%d", &n);
//	sum=Fun(n);
//	printf("%d", sum);
//	return 0;
//}

//�����ַ������鳤��
//int main()
//{
//	char str[10];
//	printf("������Ҫ������ַ���");
//	scanf("%s", &str);
//	/*printf("%d", strlen(str));
//    */
//	//����strlen����
//	int count = 0;
//	while ('\0' != *str)
//	{
//		count++;
//		str++;
//	}
//	printf("%d", count);
//
//	return 0;
//}
//�õݹ������ַ����ȣ�
//int _strlen(char *str )
//{
//	if ('\0' == *str)
//	{
//		return 0;
//	}
//	 else return 1 + _strlen(1 + str);
//}
//
//int main()
//{
//
//	int a;
//	char str[10];
//	printf("������Ҫ������ַ���");
//	scanf("%s", &str);
//	a=_strlen(&str);
//	printf("%d", a);
//
//}

//
//int Fun()
//{
//	 static int count = 1;
//	return ++count;
//}
//int main()
//{
//	int a;
//	a = Fun() - Fun() * Fun();
//	printf("%d", a);
//	return 0;
//}



//�ݹ�ʵ���ַ��������
//void reverse_string(char* string)
//{
//	char str[10];
//	* string = str;
//	printf("%s %s", string,str);
//
//}
//int main()
//{
//	char arr[10];
//	printf("������Ҫ������ַ���");
//	scanf("%s", &arr);
//	reverse_string(&arr);
//}

//�ݹ�ʵ��һ��������ÿλ��֮��
//int  DigitSum(int n)
//{
//	int num = 0;
//	if (n > 9)
//	{
//		return  DigitSum(n / 10)+n % 10;
//	}
//	else return n;
//}
//int main()
//{
//	int a,n;
//	printf("������һ����������");
//	scanf("%d", &n);
//	a=DigitSum(n);
//	printf("%d", a);
//}

//�ݹ�ʵ��n��k�η�
//int  Fun(int n,int k)
//{
//	while (--k)
//	{	
//		return n * Fun(n, k);
//	}
//	else return n;
//
//}
//int main()
//{
//	int a,n, k;
//	scanf("%d%d", &n, &k);
//	a = Fun(n, k);
//	printf("%d", a);
//	return 0;
//
//}


// 쳲����������õݹ�
//int main()
//{
//
//	int n;
//	while (scanf("%d", &n))
//	{
//		int tmp, First = 1, second = 1;
//		for (int i = 0; i < n - 2; i++)
//		{
//			tmp = second;
//			second = First + second;
//			First = tmp;
//		}
//		printf("%d\n", second);
//	}
//	return 0;
//}


int Fun(int n)
{
	int First = 1, second = 1;
	if (n>2)
	{	
		return  Fun(n - 1)+Fun(n-2);
	}
	else return 1;
}
int main()
{
	int n;
	while (scanf("%d", &n))
	{
		printf("%d\n", Fun(n));
	}
	return 0;
}









