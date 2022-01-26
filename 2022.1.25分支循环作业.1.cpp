#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>
//数1--100的所有整数出现九的个数
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//		{
//			count++;
//		}
//		if ((i / 10) % 10 == 9)
//		{
//			count++;
//		}
//	}
//	printf("count = %d", count);
//	return 0;
//}

//分数求和
//int main()
//{
//	int n = 0;
//	double s = 0.0;
//	scanf("%d", &n);
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		if (i % 2 == 1)
//		{
//			s = 1.0 / i + s;
//		}
//		else
//		{
//			s = s - 1.0 / i;
//		}
//	}
//	printf("%lf\n", s);
//	return 0;
//}
//范例
//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("%lf\n", sum);
//	return 0;
//}

//求10个整数中最大值
//int main()//错误
//{
//	int arr[] = { 0 };
//	scanf("%d", arr);
//	int i = 0;
//	int m = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] > m)
//		{
//			m = arr[i];
//		}
//	}
//	printf("%d\n", m);
//	return 0;
//}
//范例
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0]; //把max改为第一个数，可以避免max成为不在数组中的数
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i] > max)
//		{
//			max = arr[i];
//		}
//	}
//	printf("max = %d\n", max);
//	return 0;
//}

//输出9*9乘法口诀表
//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = i; j <= 9; j++)
//		{
//			int t = 0;
//			t = i * j;
//			printf(" %d * %d = %-2d   ", i, j, t);//%2d右对齐 -2d左对齐
//		}
//		printf("\n");
//	}
//	return 0;
//}

//二分查找：在有序数组中查找某个具体的数；输出其下标或者“找不到”
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	int k = 0;
//	scanf("%d", &k);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int right = sz - 1;
//	int left = 0;
//	for (i = 0; left <= right; i++)
//	{
//		int mid = (right + left) / 2;
//		if (k > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else if (k < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else
//		{
//			printf("找到了，下标是：%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到");
//	}
//	return 0;
//}