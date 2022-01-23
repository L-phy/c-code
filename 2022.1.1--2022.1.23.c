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
//	printf("加入比特\n");
//	printf("你要好好学习吗？(1/0)>:");
//	scanf("%d", &input);
//	if (input == 1)
//		printf("好Offer");
//	else
//		printf("卖红薯");
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
//	printf("较大值是 %d\n", R);
//	return 0;
//}
//sizeof是操作符，括号可以省掉
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
//	printf("%d\n", sizeof(arr) / sizeof(arr[0]));//计算数组元素个数
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
//	int* p = &a;//指针变量，用来存放地址
//	printf("%d\n",p);
//	printf("%p\n", &a);
//	*p = 20;//*---解引用操作符；间接访问操作符
//    printf("%d\n", a); a可以换成*p
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
//	char name[20];//C语言程序设计
//	short price;//55
//};
//int main()
//{
//	struct Book b1 = { "C语言程序设计",55 };
//	printf("书名：%s\n", b1.name);
//	printf("价格：%d\n", b1.price);
//	b1.price = 15;
//	strcpy(b1.name, "C++");//修改字符串使用拷贝函数
//	printf("修改后的价格：%d\n", b1.price);
//	struct Book* pb = &b1;
//	printf("%s\n", (*pb).name);//.  结构体变量.成员
//	printf("%s\n", pb->name);//-> 结构体指针->成员
//	return 0;
//}

//int main()
//{
//	int age = 18;
//	if (age < 18)
//		printf("未成年\n");
//	else if (age>=18 && age < 40)
//	//18<=age<40 是错误形式，先执行18<=age，再用结果判定0<40
//		printf("青年\n");
//	else
//		printf("老年\n");
//	return 0;
//}

//int main()
//{
//	int age = 15;
//	if (age < 18)
//	{
//		printf("未成年\n");//多个语句（代码块）要用大括号
//		printf("不能谈恋爱\n");
//	}
//	else 
//	{
//		if (age >= 18 && age < 40)
//			printf("青年\n");
//		else
//			printf("老年\n");
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 2;
//	if (a == 1)//判断为假后，直接返回0了  无法进入下面的语句
//		if (b == 2)
//			printf("hehe\n"); 
//		else//else和最近的if进行匹配  else 悬空bug
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
//	//else加与不加都是否则
//	return y;
//}

//int main()
//{
//	int num = 4;
//	if (5 == num)//=赋值  ==判断相等  不容易出错
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
//		printf("a为奇数");
//	}
//	else
//	{
//		printf("a为偶数");
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
//	switch (day)//整形表达式 day必须是整形 char字符类型表示对应的astma值
//	{
//	case 1://整形表达式 1必须是整形 1.0错误  不能是变量
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
//		printf("工作日\n");
//		break;
//	case 6:
//	case 7:
//		printf("休息日\n");
//		break;
//	default://无顺序  可以放前面
//		printf("输入错误\n");
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
//			break;//突然停止
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
//			continue;//  终止本次循环，跳到while继续执行死循环
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
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认（Y/N):");
//	ret = getchar();
//  输入函数优先读取输入缓冲区中的内容
//  输入缓冲区中的\n被读走，所以直接输出放弃确认
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else {
//		printf("放弃确认\n");
//	}
//	return 0;
//}

//int main()
//{
//	char p[3] = { 1,2,3 };
//	printf("%d\n", p);
//	printf("%p\n", p);  //数组里存的是地址，在scanf里不用再取地址
//	return 0;
//}

//int main()
//{
//	int ret = 0;
//	char password[20] = { 0 };
//	printf("请输入密码：");
//	scanf("%s", password);
//	printf("请确认（Y/N):");
//	int ch = 0;
//	while (ch = getchar() != '\n')
//	{
//		;
//	}
//	//getchar();  //清空输入缓冲区
// 
//	ret = getchar();
//	if (ret == 'Y')
//	{
//		printf("确认成功\n");
//	}
//	else {
//		printf("放弃确认\n");
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
//	int i = 0; //初始化
//	while (i < 10)  //判断
//	{
//		if (5 == i)
//		{
//			continue;//跳到判断，进行不了i++，进入死循环
//		}
//		printf("%d\n", i);
//		i++;//调整
//	}
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 11; i++)//括号中（初始化；判断；调整）
//	{
//		if (5 == i)
//		{
//			continue;//跳到调整继续i++
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
//		if (i = 5)//在内部修改循环变量，容易导致失去控制
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
//	for (i = 0; i < 10; i++) //建议前闭后开写法
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}

//int main()
//{
//	for (; ; )//当判断部分被省略，判断条件恒为真
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
//		for (; j < 10; j++)//需要重新赋值
//		{
//			printf("hehe\n");
//		}//第一次执行完之后j = 10；以后的循环不再执行
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

//n的阶乘
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


//n的阶乘和
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int n = 0;
//	int s = 0;
//	scanf("%d", &n);
//	for (j = 1; j < n + 1; j++)
//	{
//		int T = 1;//T初始化
//		for (i = 1; i < j + 1; i++)
//		{
//			T = T * i;
//		}
//		s = s + T;
//	}
//	printf("%d\n", s);
//	return 0;
//}

//n的阶乘和优化
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
//		printf("相等");
//	}
//	return 0;
//}

//在一个有序数组中查找具体的某个数字n。
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
//			printf("下标是：%d\n", i);
//			break;//如果不加break，i会被重置为0
//		}
//	}
//	if(sz==i)
//		printf("找不到\n");
//	return 0;
//}

//有序数组中找数字  优化算法  二分查找算法  拆半查找算法
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
//			printf("下标是：%d\n", mid);
//			break;
//		}
//	}
//	if (left > right)
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "wlecome to bit";
//	char arr2[] = "##############";
//	int left = 0;
//	int right = sizeof(arr1) / sizeof(arr1[0]) - 2;
//	//int right = strlen(arr1)-1;  strlen 不考虑/0
//	//字符串数组需要考虑/0，所以要减2
//	int mid = (right + left) / 2;
//	while(left<=right)
//	{
//		arr2[left] = arr1[left];
//		arr2[right] = arr1[right];
//		system("cls");//执行系统命令的一个函数-cls 清空屏幕
//		printf("%s\n", arr2);
//		Sleep(1000); //休息一秒
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
//		printf("请输入密码:>");
//		scanf("%s", password);
//		if(strcmp(password, "123456") ==0 )
//		== 不能用来比较两个字符串是否相等，应当使用一个库函数--strcmp
//	      strcmp 如果第一个字母串大于第二个 返回正数  否则负数  相等为零
//		{
//			printf("登录成功\n");
//			break;
//		}
//		else
//		{
//			printf("密码错误\n");
//		}
//	}
//	if (i == 3)
//	{
//		printf("三次密码均错误，退出程序\n");
//	}
//	return 0;
//}

//把三个数从小到大输出
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
//	//中间加入“，”  %d,%d,%d  这样在控制台输入时  也要加入逗号（不止逗号）
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

