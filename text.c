#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//递归实现阶乘
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

//计算字符串数组长度
//int main()
//{
//	char str[10];
//	printf("请输入要计算的字符：");
//	scanf("%s", &str);
//	/*printf("%d", strlen(str));
//    */
//	//不用strlen函数
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
//用递归运算字符长度；
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
//	printf("请输入要计算的字符：");
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



//递归实现字符串逆输出
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
//	printf("请输入要计算的字符：");
//	scanf("%s", &arr);
//	reverse_string(&arr);
//}

//递归实现一个整数的每位数之和
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
//	printf("请输入一个正整数！");
//	scanf("%d", &n);
//	a=DigitSum(n);
//	printf("%d", a);
//}

//递归实现n的k次方
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


// 斐波那契数不用递归
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









