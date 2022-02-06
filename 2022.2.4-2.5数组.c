#include <stdio.h>
#include<string.h>
//int main()
//{
//	int arr[10] = { 1,2,3 };//不完全初始化,剩下为0
//	char arr2[5] = { 'a','b' };
//	char arr3[5] = "ab";
//	char arr4[] = "abcdef"; 
//	printf("%d\n", sizeof(arr4));//计算单位是字节  操作符
//	printf("%d\n", strlen(arr4));//'\0'之前的字符个数  库函数
//	//int n = 5;
//	//char ch[n];//err
//	return 0;
//}
//int main()
//{
//	char arr[] = "abcdef";
//	printf("%c\n", arr[5]);
//	int i = 0;
//	for (i = 0; i < 6; i++)
//	{
//		printf("%c ", arr[i]);
//	}
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3 };
//	char arr1[] =  "abc" ;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	printf("%d ", sz);
//	int sz1 = sizeof(arr1) / sizeof(arr1[0]);
//	printf("%d", sz1);
//	return 0;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%p\n", &arr[i]);
//		int a = &arr[i];
//		printf("%d\n", a); //结果不相同？
//	}
//	return; 
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };//三行四列
//	char ch[5][6];
//	int arr1[][4] = { {1,2,3,4},{5,6,7,8} };
//	//行下标可以省略，列不能省略
//	return 0;
//}
//int main()
//{
//	char arr[3] = "abc";
//	char arr1[4] = "abc";
//	char arr4[4] = { 'a','b','c','d'};
//	int arr2[4] = { 1,2,3 };
//	int arr3[3] = {1, 2, 3};
//	return 0;
//}
//int main()
//{
//	int arr[3][4] = { {1,2,3},{4,5} };
//	int i = 0;
//	for (i = 0; i < 3; i++)
//	{
//		int j = 0;
//		for (j = 0; j < 4; j++)
//		{
//			//printf("%d ", arr[i][j]);
//			printf("&arr[%d][%d] = %p\n", i, j, &arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}


// 冒泡排序
//void bubble_sort(int arr[],int sz)
//{
//	//确定冒泡排序的趟数
//	int i = 0;
//	{
//		for (i = 0; i < sz - 1; i++)
//		{
//			int flag = 1;//假设已经有序
//			int j = 0;
//		//每一趟冒泡排序
//			for (j = 0; j < sz - 1 - i; j++)
//			{
//				if (arr[j] > arr[j + 1])
//				{
//					int tmp = 0;
//					tmp = arr[j];
//					arr[j] = arr[j + 1];
//					arr[j + 1] = tmp;
//					flag = 0;//本趟排序的数据不完全有序
//				}
//			}
//			if (flag == 1)
//			{
//				break;
//			}
//		}
//	}
//}
//
//
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	bubble_sort(arr, sz);
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	return 0;
//}


int main()
{
	int arr[5] = { 1,2,3,4,5 };
	//数组名就是首元素地址，但有两个例外
	//例外1  计算数组大小
	//例外2  取出的是整个数组的地址
	printf("%p\n", arr);
	printf("%p\n", arr+1);
	printf("%p\n", &arr[0]);
	printf("%p\n", &arr[0]+1);
	printf("%p\n", *arr);
	int a = sizeof(arr);
	printf("%p\n", &arr);//数组的地址
	printf("%p\n", &arr+1);
	return 0;
}