#include <stdio.h>
//#include "add.h"
//int main()
//{
//	int a = 20;
//	int b = 10;
//	int sum = Add(a, b);
//	printf("%d\n", sum);
//	return 0;
//}
//int main() //递归常见错误：栈溢出 stack overflow
//{
//	printf("hehe\n"); 
//	main();
//	return 0;
//}

//接受一个整型，按照顺序打印每一位
//循环打印  逆序
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	while(a>=1)
//	{
//		int b = 0;
//		b = a % 10;
//		printf("%d\n", b);
//		a = a / 10;
//	}
//	return 0;
//}
//void print(int n)
//{
//	if (n > 9)//递归要找递归条件；每次调用之后接近条件
//	{
//		print( n/10 );
//	}
//	printf("%d ", n % 10);
//}
//int main()
//{
//	unsigned int num = 0;
//	scanf("%d", &num);
//	print(num);
//	return 0;
//}
//实现求支付串长度
#include <string.h>
//循环
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//递归  
//int my_strlen(char* str)
//{
//	if (*str != 0)
//	{
//		str++;
//		return 1 + my_strlen(str);
//	}
//	else
//		return 0;
//}
//
//int main()
//{
//	char arr[] = "bit";
//	//int len = strlen(arr);
//	//int sz = sizeof(arr) / sizeof(arr[0]);
//	int len = my_strlen(arr);
//	//对于数组，函数参数是第一个元素的地址
//	printf("%d\n", len);
//	return 0;
//}
//求n的阶乘
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	int c = 1;
//	for (i = 1; i <= n; i++)
//	{
//		c = c * i;
//	}
//	printf("%d\n", c);
//	return 0;
//}

//int function(int x)
//{
//	if (1 < x)
//	{
//		return x*function(x - 1);
//	}
//	else 
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int c = function(n);
//	printf("%d", c);
//	return 0;
//}

//斐波那契数列 
// 递归在解决这个问题时，效率太低，容易栈溢出
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//测试第三个计算次数
//	{
//		count++;
//	}
//	if (n <= 2)
//	{
//		return 1;
//	}
//	else
//		return Fib(n - 1) + Fib(n - 2);
//}
//int Fib2(int n)
//{
//	int i = 0;
//	int s1 = 1;
//	int s2 = 1;
//	int s = 0;
//	if (n > 2)
//	{
//		for (i = 1; i <= n - 2; i++)
//		{
//			s = s1 + s2;
//			s1 = s2;
//			s2 = s;
//		}
//		return s;
//	}
//	else
//		return 1;
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret = Fib2(n);
//	printf("%d", ret);
//	return 0;
//}
//void test(int n)
//{
//	if (n < 10000)
//	{
//		test(n + 1);
//	}
//}
//int main()
//{
//	test(1);
//	return 0;
//}