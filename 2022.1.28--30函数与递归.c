#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//int Add(int x, int y) //�������ͣ�����������������
//{
//	int z = 0; //�����壻�����  ����������ʵ��
//	z = x + y;
//	return z;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int sum = Add(a, b);
//	printf("%d\n", sum);// �⺯����c���Ա����ṩ�� 
//	return  0; 
//}
//strlen -  string length �ַ�������
//strcpy - string copy ����
//int main()
//{
//	char arr1[] = "bit";
//	char arr2[20] = "#############";
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//memset - memory�ڴ� set����
//int main()
//{
//	char arr[] = "hello world";
//	memset(arr, '*', 5);//�ڴ��д��ַ������ASCIIֵ��*��Ӧһ��int
//	printf("%s\n", arr);
//	return 0;
//}
//���� �ҽϴ�ֵ
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
//���� ��������
// ����1  
//void change(int x, int y)
//{
//	int tmp = 0;//���βεĸı䲻��ı�ʵ��
//	tmp = x;
//	x = y;
//	y = tmp;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	change(a, b);
//���뺯���ڲ���ҪF11
// ʵ�ʲ���  ��ʵ���������Ĳ���
//	printf("a = %d, b = %d", a, b);
//	return 0;
//
//��ַ����
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
//	Swap(&a, &b);//��ʽ����
//	printf("a = %d, b = %d", a, b);
//	return 0;
//}
// �������ж�����
//void hanshu(int x)
//{
//	int i = 0;
//	for (i = 2; i < x; i++)
//	{
//		int b = x % i;
//		if (0 == b)
//		{
//			printf("��ֵΪ����");
//			break;
//		}
//	}
//	if (i == x)
//	{
//		printf("��ֵΪ����");
//	}
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	hanshu(a);
//	return 0;
//}
//����
//int is_prime(int n)  //��������1 ���򷵻�0
//{
//	int j = 0;
//	for (j = 2; j < n; j++)
//	{
//		if (n % j == 0)
//		{
//			return 0;//����ʡ��break ֱ����������
//		}
//	}
//	//if (j == n)����ʡ�ԣ���Ϊֻ����һ�����
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
//�ж�����
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
//���������ֲ���
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
//		printf("�Ҳ���ָ������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
//	}
//	return 0;
//}
//void function(int* pn)
//{
//	(*pn)++;  //++�����ȼ�����*��
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
//	printf("%d\n", strlen("abc"));//��ʽ���� ����ֵΪ����
//	return 0;
//}

//int main()
//{
//	printf("%d", printf("%d", printf("%d", 43)));
// ��������  ��ӡ�ַ��ĸ���
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