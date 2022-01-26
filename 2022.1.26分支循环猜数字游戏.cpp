#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>
//猜数字游戏
//1.电脑会生成一个随机数
//2.猜数字
//int main() //不会产生随机数，直接猜数字
//{
//	int random = 6248;
//	int guess = 0;
//	int i = 0;
//	
//	for (i = 0; guess != random; i++)
//	{
//		scanf("%d", &guess);
//		if (guess > random)
//		{
//			printf("太大啦\n");
//		}
//		else if (random > guess)
//			printf("太小啦\n");
//	}
//	if (guess == random)
//	{
//		printf("猜对啦");
//	}
//	return 0;
//}
// 范例
//RAND_MAX--32767
//void menu()
//{
//	printf("*************************\n");
//	printf("**** 1.play   0.exit ****\n");
//	printf("*************************\n");
//}
//void game()
//{
//	int ret = 0;
//	//时间戳 设置随机数的生成起点 
//	//现在时间减去起始时间（1970.1.1 0：0：0）（单位秒）
//	ret = rand()%100+1;//生成随机数
//	int guess = 0;
//	int i = 0;
//	for (i = 1; guess != ret; i++)
//	{
//		printf("请猜数字:>");
//		scanf("%d", &guess);
//		if (guess > ret)
//		{
//			printf("太大了\n");
//		}
//		else if (guess < ret)
//		{
//			printf("太小了\n");
//		}
//		else
//		{
//			printf("牛逼，猜对了\n");
//			break;
//		}
//		if (i >= 4)
//		{
//			printf("t( -_- t )\n");
//		}
//	}
//}
//int main()
//{
//	int input = 0;
//	srand((unsigned int)time(NULL));
//	do
//	{
//		menu();
//		printf("请选择>:");
//		scanf(" %d", &input);
//		switch (input)
//		{
//		case 1:
//			game();
//			break;
//		case 0:
//			printf("退出游戏\n");
//			break;
//		default:
//			printf("选择错误\n");
//			break;
//		}
//	} while (input);
//	return 0;
//

//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = i + 4; j <= 9; j+=2)
//		{
//			int t = 0;
//			int m = 0;
//			t = i * j;
//			printf(" %d * %d = ", i, j);
//			scanf("%d", &m);
//			if (m == t)
//			{
//				printf("(* T — T)b   牛逼，666\n");
//			}
//			else
//			{
//				printf("t(=n=) 拉了库里了\n");
//			}
//		}
//
//		printf("\n");
//	}
//	return 0;
//}

//goto语句
//int main()
//{
//	printf("hello bit\n");
//	goto again;//可能导致逻辑混乱
//	printf("nihao\n");
//again:
//	printf("hehe\n");
//	return 0;
//}
//goto语言适用于嵌套的多次循环

#include <string.h>
//关机程序
//int main()
//{
//	char input[20] = { 0 };
//	//shutdown -s -t 60 关闭命令
//	//system() - 执行系统命令
//	system("shutdown -s -t 60");
//	again:
//	printf("请注意，你的电脑在1分钟内关机，如果输入：我是猪，就取消关机\n请输入>: ");
//	scanf("%s", input);
//	if (strcmp(input, "我是猪") == 0)
//	//比较两个字符串 - strcmp()
//	{
//		system("shutdown -a");
//	}
//	else
//	{
//		goto again;//可以用循环代替
//	}
//	return 0;
//}
//cmd command 命令行