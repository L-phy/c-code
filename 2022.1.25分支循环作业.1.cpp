#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
#include <math.h>
//��1--100�������������־ŵĸ���
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

//�������
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
//����
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

//��10�����������ֵ
//int main()//����
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
//����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0]; //��max��Ϊ��һ���������Ա���max��Ϊ���������е���
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

//���9*9�˷��ھ���
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
//			printf(" %d * %d = %-2d   ", i, j, t);//%2d�Ҷ��� -2d�����
//		}
//		printf("\n");
//	}
//	return 0;
//}

//���ֲ��ң������������в���ĳ�����������������±���ߡ��Ҳ�����
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
//			printf("�ҵ��ˣ��±��ǣ�%d", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���");
//	}
//	return 0;
//}