#include<stdio.h>
#include"task6_.h"
void init(int arr[], int len)
{
	int i = 0;
	printf("初始化数组->:\n");
	for (i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void reverse(int arr[], int len)
{
	int i = 0;
	printf("逆置数组\n");
	for (i = len - 1; i >= 0; i--)
	{
		printf("%d", arr[i]);
	}
}
void empty(int arr[], int len)
{
	int i = 0;
	printf("清空数组-<:\n");
	for (i = 0; i <len; i++)
	{
		arr[i] = 0;
		printf("%d", arr[i]);
	}

}
void Test()
{
	int arr[5];
	int len = sizeof(arr) / sizeof(arr[0]);
	init(arr, len);
	printf("\n");
	reverse(arr, len);
	printf("\n");
	empty(arr, len);
	printf("\n");
}

