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
//int main() //�ݹ鳣������ջ��� stack overflow
//{
//	printf("hehe\n"); 
//	main();
//	return 0;
//}

//����һ�����ͣ�����˳���ӡÿһλ
//ѭ����ӡ  ����
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
//	if (n > 9)//�ݹ�Ҫ�ҵݹ�������ÿ�ε���֮��ӽ�����
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
//ʵ����֧��������
#include <string.h>
//ѭ��
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
//�ݹ�  
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
//	//�������飬���������ǵ�һ��Ԫ�صĵ�ַ
//	printf("%d\n", len);
//	return 0;
//}
//��n�Ľ׳�
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

//쳲��������� 
// �ݹ��ڽ���������ʱ��Ч��̫�ͣ�����ջ���
//int count = 0;
//int Fib(int n)
//{
//	if (n == 3)//���Ե������������
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