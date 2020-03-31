
/*
1.完成猜数字游戏。

2.写代码可以在整型有序数组中查找想要的数字，
找到了返回下标，找不到返回-1.（折半查找）

3.编写代码模拟三次密码输入的场景。
最多能输入三次密码，密码正确，提示“登录成功”,密码错误，
可以重新输入，最多输入三次。三次均错，则提示退出程序。

4.编写一个程序，可以一直接收键盘字符，
如果是小写字符就输出对应的大写字符，
如果接收的是大写字符，就输出对应的小写字符，
如果是数字不输出。




*/
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)

/*int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 23, 34, 45, 56, 67, 78, 89, 90 };
	int k = 23;
	int left = 0;//左下标
	int right = sizeof(arr) / sizeof (arr[0]) - 1;//右下标
	
	while (left <= right)
	{

		int mid = (right + left) / 2;
		if (k == arr[mid])
		{
			printf("找到有%d",k);
			break;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	if (left>right)
	   printf("找不到");
	
system("pause");
return 0;
}

*/

/*
int my_strcmp(char const *p, char const *q)
{
	while (*p == *q)
	{
		if (*p == '\0')
			return 0;
		p++;
		q++;

	}
	if (*p > *q) return 1;
	if (*p < *q) return -1;

}
int main()
{
	char *str = "123456";
	char arr[10];
	
	int i;
	for (i = 0; i < 3; i++)
	
	{
		printf("请输入密码:>");
		scanf("%s", arr);
		if (my_strcmp(str, arr) == 0)
		{
			printf("输入正确");
			Sleep(2000);
			break;
		}
		else
		{
			printf("输入错误重新输入");

		}
	}
	if (i=3)
		printf("退出程序。");
}
*/
/*
int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c <= 'Z'&&c >= 'A')
			printf("%c", c + 32);
		else if (c <= 'z'&&c >= 'a')
			printf("%c", c - 32);
		else if ('0'<=c&&c<='9')
			printf(" ");
	}

system("pause");
return 0;
}*/