/*
1.调整数组使奇数全部都位于偶数前面。
题目：
输入一个整数数组，实现一个函数，
来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
所有偶数位于数组的后半部分。

#include <stdio.h>
#include <stdlib.h>


void func(int arr[], int size)
{
	int  i;
	int  temp;
	int  j = size - 1;
	for (i = 0; i != j; i++)
	{
		if (arr[i] % 2 != 0)//判为奇数
		{
			continue;
		}
		else 
		{//交换,不管是奇数还是偶数
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			//如果交换的是偶数的话j--,是一个奇数的话停留在这里,等待下一个数字
			if (arr[j] % 2 == 0)
				{
					j--;
				}
			i--;   //让i--回到刚才的位置判断交换的数是奇数还是偶数
	    }
	}
}
int main() 
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int i;
	int size = sizeof(arr) / sizeof(int);
	func(arr, size);
	printf("排序:\n");
	for (i = 0; i<size; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/
/*
2.
//
杨氏矩阵
有一个二维数组.
数组的每行从左到右是递增的，每列从上到下是递增的.
在这样的数组中查找一个数字是否存在。
时间复杂度小于O(N);

数组：
1 2 3
2 3 4
3 4 5


1 3 4
2 4 5
4 5 6

1 2 3
4 5 6
7 8 9

*/
/*
#include<stdio.h>
#include<stdlib.h>
int Find_number(int arr[3][3], int *px, int *py, int key)
{
	int x=0;
	int y = *py - 1;
	while ((x <= (*py - 1)) && (y >= 0))//保证x<=2,y>=0
	{
		if(arr[x][y] == key)
			return 1;
		else if (arr[x][y] < key)
			x++;
		else
			y--;
	}
	return 0;
}
int main()
{
	int arr[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = 0;
	int x = 3;//行数为3
	int y = 3;//列数为3
	int result = 0;
	scanf("%d", &num);
	result = Find_number(arr, &x, &y, num);//x和y传相应的地址
	if (result)
	{
		printf("find it,the location is %d  %d\n", x, y);
	}
	else
		printf("can't find it\n");
	system("pause");
	return 0;
}
*/