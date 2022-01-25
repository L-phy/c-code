#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>

//打印3的倍数
//int main()
//{
//	int a = 3;
//	int i = 1;
//	while (a <= 100)
//	{
//		i++;
//		printf("%d\n", a);
//		a = 3 * i;
//	}
//	return 0;
//}
//范例
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d\n", i);
//	}
//	return 0;
//}

//给定两个数，求最大公约数
//int main()  //错误，求得公约数
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	int i = 0;
//	for (i = 1; i <= a || i <= b; i++)
//	{
//		if (a % i == 0 && b % i == 0)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//知道辗转相除法之后再次尝试
//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	if (a > b)//不用比较大小
//	{
//		int t = a;
//		a = b;
//		b = t;
//	}
//	int r = 1;
//	while (r != 0)
//	{
//		r = b % a;
//		b = a;
//		a = r;
//	}
//	printf("%d\n", b);
//	return 0;
//} 
//示例
//int main()
//{
//	int m = 0;
//	int n = 0;
//	int r = 0;
//	scanf("%d%d", &m, &n);
//	while (r = m % n)
//	{
//		m = n;
//		n = r;
//	}
//	printf("%d\n", n);
//	return 0;
//}
//打印闰年
//int main()
//{
//	int i = 1000;
//	int count = 0;
//	while (i <= 2000)
//	{
//		if (0 == i % 4 && 0 != i % 100)
//		{
//				printf("%d\n", i);
//				count++;
//		}
//		else if (0 == i % 400)
//		{
//			printf("%d\n", i);
//			count++;
//		}
//		i++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1000; i <= 2000; i++)
//	{
//		if (((i % 4 == 0) && (i % 100 != 0)) || (i % 400 == 0))
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}
//打印100-200之间的素数
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int count = 0;
//		for (j = 1; j <= i; j++)
//		{
//			int a = i % j;
//			
//			if (a == 0)
//			{
//				count++;
//			}
//		}
//		if (count == 2)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//范例1
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j < i; j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j == i)
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//范例2
// 检验到开平方
//int main()
//{
//	int i = 0;
//
//	for (i = 100; i <= 200; i++)
//	{
//		int j = 0;
//		for (j = 2; j <= sqrt(i); j++)
//        //sqrt - 开平方的库函数  #include <math.h>
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//		if (j >sqrt(i))
//		{
//			printf("%d\n", i);
//		}
//	}
//	return 0;
//}
//范例3 跳过偶数 i+=2 三个范例都是试除法
//推荐文章 《素数求解的n种境界》

