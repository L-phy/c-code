#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include<stdlib.h>
#include<string.h>
//int main()
//{
//	int sum1 = 0;
//	int sum2 = 0;
//	int sum = 0;
//	scanf("%d%d",&sum1,&sum2);
//	sum = sum1 + sum2;
//	printf("%d\n", sum);
//	return 0;
//}
//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 67,97,99,0};
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
////}

//int main()
//{
//	char arr1[] = "abc";
//	char arr2[] = { 'a','b','c'};
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", strlen(arr2));
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\'');
////	return 0;
//
//int main()
//{
//	printf("%d\n", strlen("c:\\test\\32\\test.c"));
//	return 0;
//}
//int main()
//{
//	printf("%c\n", '\31');
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧϰ��(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("��Offer");
//	else
//		printf("������");
//	return 0;
//}
//int main()
//{
//	int line = 0;
//	printf("joint bite\n");
//	while (line < 200)
//	{
//		printf("knock code\n");
//		line++;
//	}
//	printf("finish first step\n");
//	return 0;
//}
//int Add
//int main()
//{
//	int arr[10] = { 7,8,9,10 };
//	int i = 0;
//	while (i<10)
//	{
//		printf("%d\n", arr[i]);
//		i++;
//	}
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = 5;
//	int c = a ^ b;
//	printf("%d\n", c);
//	return 0;
//}
//int main()
//{
//	int a = 2;
//	printf("%d\n", !a);
//	return 0;
//
//}
//int main()
//{
//	int arr[5] = { 5 };
//	printf("%d\n", sizeof(arr));
//	return 0;
//}
//int main()
//{
//	int arr[10] = { 7,8,9,10 };
//	printf("%d\n", arr[1]);
//	return 0;
//}
//int Add(int x, int y)
//{
//	int z = x + y;
//	return z;
//}
//int Tu(int x, int y)
//{
//	int z = 0;
//	if (x < y)
//		 z = y;
//	else
//		 z = x;
//	return z;
//}
//int main()
//{
//	int a = 30;
//	int b = 50;
//	int R = Tu(a, b);
//	printf("�ϴ�ֵ�� %d\n", R);
//	return 0;
//}
//sizeof�ǲ����������ſ���ʡ��
//int main()
//{
//	int arr1[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr1));
//	printf("%d\n", strlen(arr1));
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4 };
//	printf("%d\n", sizeof(arr));
//	printf("%d\n", sizeof arr);
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//��������Ԫ�ظ���
//	return 0;
//}
//int main()
//{
//	int a = 3;
//	int b = ++a;
//	printf("a = %d b = %d", a, b);
//	return 0;
//}
//int main()
//{
//	int a = (int)3.14;
//	printf("%d", a);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 5;
//	int c = (a > b ? a : b);
//	printf("%d", c);
//	return 0;
//}
//void test()
//{
//	static int a = 1;
//	a++;
//	printf("a = %d\n", a);
//
//}
//int main()
//{
//	int i = 0;
//		while (i < 5)
//		{
//			test();
//			i++;
//		}
//	return 0;
//}
//int main()
//{
//	extern int g_val;
//	printf("g_val = %d ", g_val);
//	return 0;
//}
// 
//extern int Add(int, int);
//int main()
//{
//	int a = 40;
//	int b = 10;
//	int c = Add(a, b);
//	printf("%d", c);
//	return 0;
//}
// 
//#define MAX 100
//int main()
//{
//	int a = MAX;
//	printf("%d", a);
//	retur  0;
//}
// 
//int main()
//{
//	int a = 10;
//	int* p = &a;//ָ�������������ŵ�ַ
//	printf("%d\n",p);
//	printf("%p\n", &a);
//	*p = 20;//*---�����ò���������ӷ��ʲ�����
//    printf("%d\n", a); a���Ի���*p
//	printf("%d\n", sizeof(p)); 
//	return 0;
//}

//int main()
//{
//	double a = 3.14;
//	double* p = &a;
//	printf("%d\n", sizeof(p));
//	printf("%d\n", sizeof(a));
//	return 0;
//}

//struct Book
//{
//	char name[20];//C���Գ������
//	short price;//55
//};
//int main()
//{
//	struct Book b1 = { "C���Գ������",55 };
//	printf("������%s\n", b1.name);
//	printf("�۸�%d\n", b1.price);
//	b1.price = 15;
//	strcpy(b1.name, "C++");//�޸��ַ���ʹ�ÿ�������
//	printf("�޸ĺ�ļ۸�%d\n", b1.price);
//	struct Book* pb = &b1;
//	printf("%s\n", (*pb).name);//.  �ṹ�����.��Ա
//	printf("%s\n", pb->name);//-> �ṹ��ָ��->��Ա
//	return 0;
//}

//int main()
//{
//	int age = 18;
//	if (age < 18)
//		printf("δ����\n");
//	else if (age>=18 && age < 40)
//	//18<=age<40 �Ǵ�����ʽ����ִ��18<=age�����ý���ж�0<40
//		printf("����\n");
//	else
//		printf("����\n");
//	return 0;
//}

//int main()
//{
//	int age = 15;
//	if (age < 18)
//	{
//		printf("δ����\n");//�����䣨����飩Ҫ�ô�����
//		printf("����̸����\n");
//	}
//	else 
//	{
//		if (age >= 18 && age < 40)
//			printf("����\n");
//		else
//			printf("����\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//�ж�Ϊ�ٺ�ֱ�ӷ���0��  �޷�������������
//		if (b == 2)
//			printf("hehe\n"); 
//		else//else�������if����ƥ��  else ����bug
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)
//	{
//		if (b == 2)
//			printf("hehe\n");
//	}
//		else
//			printf("haha\n");
//	return 0;
//}

//int main()
//{
//	int x = 4;
//	int y = 5;
//	int a = 6;
//	if (a > 4)
//	{
//		return x;
//	} 
//	//else���벻�Ӷ��Ƿ���
//	return y;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)//=��ֵ  ==�ж����  �����׳���
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	int b = a % 2;
//	if (1 == b)
//	{
//		printf("aΪ����");
//	}
//	else
//	{
//		printf("aΪż��");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 61;
//	int b = a % 2;
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while(i<=100)
//	{
//		int a = i % 2;
//		if (1 == a)
//		{
//			printf("%d\n", i);
//		}
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int day = 0;
//	scanf("%d", &day);
//	switch (day)//���α��ʽ day���������� char�ַ����ͱ�ʾ��Ӧ��astmaֵ
//	{
//	case 1://���α��ʽ 1���������� 1.0����  �����Ǳ���
//		printf("Monday\n");	
//		break;
//	case 2:
//		printf("Tuesday\n");
//		break;
//	case 3:
//		printf("Wednesday\n");
//		break;
//	case 4:
//		printf("Thursday\n");
//		break;
//	case 5:
//		printf("Friday\n");
//		break;
//	case 6:
//		printf("Saturday\n");
//		break;
//	case 7:
//		printf("Sunday\n");
//		break;
//	}
//		return 0;
//	}

//int main()
//{
//	int day = 0;
//	int n = 1;
//	scanf("%d", &day);
//	switch (day)
//	{
//	case 1:
//		if (1 == n)
//			printf("hehe\n");
//	case 2:
//	case 3:
//	case 4:
//	case 5:
//		printf("������\n");
//		break;
//	case 6:
//	case 7:
//		printf("��Ϣ��\n");
//		break;
//	default://��˳��  ���Է�ǰ��
//		printf("�������\n");
//		break;
//	}
//		return 0;
//	}

//int main()
//{
//		int n = 1;
//		int m = 2;
//		switch(n)
//		{
//		case 1:
//			m++;//m =  3
//		case 2:
//			n++;//n = 2
//		case 3:
//			switch (n)
//			{
//			case 1:
//				n++;
//			case 2:
//				m++;
//				n++;
//				break;//m = 4;n = 3
//			}
//		case 4:
//			m++;// m = 5;n = 3;
//			break;
//		default:
//			break;
//	}
//		printf("m = %d,n = %d\n", m, n);
//		return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		if (5 == i)
//			break;//ͻȻֹͣ
//		printf("%d", i);
//		i++;
//	}
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	while (i <= 10)
//	{
//		i++;
//		if (5 == i)
//			continue;//  ��ֹ����ѭ��������while����ִ����ѭ��
//		printf("%d ", i);
//	}
//	return 0;
//}

//int main()
//{
//	int ch = getchar();
//	putchar(ch);
//	printf("%c\n", ch);
//	return 0;
//}

//int main()
//{
//	int ch = 0;
//	while((ch = getchar())!=EOF)//end of file -> -1
//	{
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	printf("��ȷ�ϣ�Y/N):");
//	ret = getchar();
//  ���뺯�����ȶ�ȡ���뻺�����е�����
//  ���뻺�����е�\n�����ߣ�����ֱ���������ȷ��
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	char p[3] = { 1,2,3 };
//	printf("%d\n", p);
//	printf("%p\n", p);  //���������ǵ�ַ����scanf�ﲻ����ȡ��ַ
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("���������룺");
//	scanf("%s", password);
//	printf("��ȷ�ϣ�Y/N):");
//	int ch = 0;
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	//getchar();  //������뻺����
// 
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("ȷ�ϳɹ�\n");
//	}
//	else {
//		printf("����ȷ��\n");
//	}
//	return 0;
//}

//int main()
//{
//	int ch = 0;  
//	while ((ch = getchar()) != EOF)  
//	{
//		if (ch < '0' || ch>'9')
//			continue;
//		putchar(ch);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0; //��ʼ��
//	while (i < 10)  //�ж�
//	{
//		if (5 == i)
//		{
//			continue;//�����жϣ����в���i++��������ѭ��
//		}
//		printf("%d\n", i);
//		i++;//����
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)//�����У���ʼ�����жϣ�������
//	{
//		if (5 == i)
//		{
//			continue;//������������i++
//		}
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{ 
//		if (i = 5)//���ڲ��޸�ѭ�����������׵���ʧȥ����
//		{
//			printf("haha\n");
//		}
//		printf("hehe\n");
//	}
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 10; i++) //����ǰ�պ�д��
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (; ; )//���жϲ��ֱ�ʡ�ԣ��ж�������Ϊ��
//	{
//		printf("hehe\n");
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (; i < 10; i++)
//	{
//		for (; j < 10; j++)//��Ҫ���¸�ֵ
//		{
//			printf("hehe\n");
//		}//��һ��ִ����֮��j = 10���Ժ��ѭ������ִ��
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for (i = 0, k = 0; k = 0; i++, k++)
//	{
//		k++;
//		printf("%d", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int k = 0;
//	for(i=0;i=1;i++)
//	{
//		printf("%d\n", i);
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		i++;
//		printf("%d\n", i);
//	}
//	while (i < 10);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	do
//	{
//		if (5 == i)
//			continue;
//			printf("%d ", i);
//		i++;
//	} while (i <= 10);
//	return 0;
//}

//n�Ľ׳�
//int main()
//{
//	int i = 0;
//	int n = 0;
//	int s = 1;
//	scanf("%d", &n);
//	for (i = 1; i < n + 1; i++)
//	{
//		s = s * i;
//	}
//	printf("%d\n", s);
//	return 0;
//}


//n�Ľ׳˺�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int s = 0;
//	scanf("%d", &n);
//	for (j = 1; j < n + 1; j++)
//	{
//		int T = 1;//T��ʼ��
//		for (i = 1; i < j + 1; i++)
//		{
//			T = T * i;
//		}
//		s = s + T;
//	}
//	printf("%d\n", s);
//	return 0;
//}

//n�Ľ׳˺��Ż�
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int s = 0;
//	int T = 1;
//	scanf("%d", &n);
//	for (j = 1; j < n + 1; j++)
//	{
//		T = T * j;
//		s = s + T;
//	}
//	printf("%d\n", s);
//	return 0;
//}

//int main()
//{
//	char a[] = "123456";
//	char b[] = "123456";
//	if (a[1] == b[1])
//	{
//		printf("���");
//	}
//	return 0;
//}

//��һ�����������в��Ҿ����ĳ������n��
//int main()
//{
//	char arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	scanf("%d", &n);
//	for (i = 0; i<sz; i++)
//	{
//		if (n == arr[i])
//		{
//			printf("�±��ǣ�%d\n", i);
//			break;//�������break��i�ᱻ����Ϊ0
//		}
//	}
//	if(sz==i)
//		printf("�Ҳ���\n");
//	return 0;
//}

//����������������  �Ż��㷨  ���ֲ����㷨  �������㷨
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int n = 0;
//	scanf("%d", &n);
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	int i = 1;
//	for (i = 1;left<=right; i++)
//	{
//		int mid = (left + right) / 2;
//		if (n < arr[mid])
//		{
//			right = mid - 1;
//		}
//		else if (n > arr[mid])
//		{
//			left = mid + 1;
//		}
//		else
//		{
//			printf("�±��ǣ�%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "wlecome to bit";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	//int right = strlen(arr1)-1;  strlen ������/0
//	//�ַ���������Ҫ����/0������Ҫ��2
//	int mid = (right + left) / 2;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");//ִ��ϵͳ�����һ������-cls �����Ļ
//		printf("%s\n", arr2);
//		Sleep(1000); //��Ϣһ��
//		left++;
//		right--;
//	}
//	return 0;
//}

//int main()
//{
//	char password[20] = "0";
//	int i = 0;
//	for (i = 0; i<3 ; i++)
//	{
//		printf("����������:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") ==0 )
//		== ���������Ƚ������ַ����Ƿ���ȣ�Ӧ��ʹ��һ���⺯��--strcmp
//	      strcmp �����һ����ĸ�����ڵڶ��� ��������  ������  ���Ϊ��
//		{
//			printf("��¼�ɹ�\n");
//			break;
//		}
//		else
//		{
//			printf("�������\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("��������������˳�����\n");
//	}
//	return 0;
//}

//����������С�������
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a <= b)
//	{
//		if (a <= c)
//		{
//			printf("%d\n", a);
//			if (b <= c)
//			{
//				printf("%d\n", b);
//				printf("%d\n", c);
//			}
//		}
//		else
//		{
//			printf("%d\n", c);
//			printf("%d\n", a);
//			printf("%d\n", b);
//		}
//	}
//	else
//	{
//		if (b <= c)
//		{
//			printf("%d\n", b);
//			if (a <= c)
//			{
//				printf("%d\n", a);
//				printf("%d\n", c);
//			}
//			else
//			{
//				printf("%d\n", c);
//				printf("%d\n", a);
//			}
//		}
//		else
//		{
//			printf("%d\n", c);
//			printf("%d\n", b);
//			printf("%d\n", a);
//		}
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	//�м���롰����  %d,%d,%d  �����ڿ���̨����ʱ  ҲҪ���붺�ţ���ֹ���ţ�
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}

