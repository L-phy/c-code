#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int Add(int x, int y) //返回类型，函数名，函数参数
//{
//	int z = 0; //函数体；语句项  交代函数的实现
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);// 库函数，c语言本身提供的 
//	return  0; 
//}
//strlen -  string length 字符串长度
//strcpy - string copy 拷贝
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//memset - memory内存 set设置
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//内存中存字符存的是ASCII值，*对应一个int
//	printf("%s\n", arr);
//	return 0;
//}
//函数 找较大值
//int get_max(int x, int y)
//{
//	if (x > y)
//		return x;
//	else
//		return y;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int max = get_max(a, b);
//	printf("max = %d\n", max);
//	return 0;
//}
//函数 交换整数
// 错误1  
//void change(int x, int y)
//{
//	int tmp = 0;//对形参的改变不会改变实参
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	change(a, b);
//进入函数内部需要F11
// 实际参数  真实传给函数的参数
//	printf("a = %d, b = %d", a, b);
//	return 0;
//
//地址操作
//void Swap(int* pa, int* pb)
//{
//	int tmp = 0;
//	tmp = *pa;
//	*pa = *pb;
//	*pb = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	Swap(&a, &b);//形式参数
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}
// 函数：判断素数
//void hanshu(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		int b = x % i;
//		if (0 == b)
//		{
//			printf("该值为合数");
//			break;
//		}
//	}
//	if (i == x)
//	{
//		printf("该值为质数");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	hanshu(a);
//	return 0;
//}
//范例
//int is_prime(int n)  //素数返回1 否则返回0
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//可以省略break 直接跳出函数
//		}
//	}
//	//if (j == n)可以省略，因为只有这一种情况
//		return 1;
//}
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d", i);
//		}
//	}
//	return 0;
//}
//判断闰年
//int hanshu(int i)
//{
//	if (0 == i % 4 && 0 != i % 100)
//	{
//		return 1;
//	}
//	else if (0 == i % 400)
//	{
//		return 1;
//	}
//	else
//	{
//		return 0;
//	}
//}
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (hanshu(year) == 1)
//		{
//			printf("%d ", year);
//		}
//	}
//	return 0;
//}
//函数：二分查找
//int binary_search(int arr2[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	int i = 0;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr2[mid] > k)
//		{
//			right = mid - 1;
//		}
//		else if (arr2[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			return mid;
//		}
//	}
//	return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int a = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &a);
//	int ret = binary_search(arr, a, sz);
//	if (ret == -1)
//	{
//		printf("找不到指定数字\n");
//	}
//	else
//	{
//		printf("找到了，下标是：%d\n", ret);
//	}
//	return 0;
//}
//void function(int* pn)
//{
//	(*pn)++;  //++的优先级大于*号
//	//int a = *pn;
//	//a++;
//	//*pn = a;
//}
//int main()
//{
//	int num = 0;
//	int i = 0;
//	for (i = 0; i <= 5; i++)
//	{
//		function(&num);
//		printf("%d\n", num);
//	}
//	return 0;
//}

//int main()
//{
//	int len = 0;
//	len = strlen("abc");
//	printf("%d\n", len);
//	printf("%d\n", strlen("abc"));//链式访问 返回值为参数
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
// 返回整型  打印字符的个数
//	return 0;
//}
//#include"Add.h"
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = 0;
//	sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}