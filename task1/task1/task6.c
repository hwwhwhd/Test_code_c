/*
1.实现一个函数，打印乘法口诀表，口诀表的行数和列数自己指定，
输入9，输出9*9口诀表，输入12，输出12*12的乘法口诀表。

2.使用函数实现两个数的交换。

3.实现一个函数判断year是不是润年。

4.
创建一个数组，
实现函数init（）初始化数组、
实现empty（）清空数组、
实现reverse（）函数完成数组元素的逆置。
要求：自己设计函数的参数，返回值。

5.实现一个函数，判断一个数是不是素数*/
/*#include<stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)
*/

/*sd
void A(int m)
{ 
	int i,j;
	for (i = 1; i <=m; i++)
	{
		for (j = 1; j <= i; j ++)
		{
			printf("%d*%d=%d\t", i, j, i*j);

		}
		printf("\n");

	}
}
int main()
{
	int i;
	printf("请输入一个数");
	scanf("%d", &i);
	A(i);
	system("pause");
	return 0;
}
*/
/*
void Swap(int *i, int *j)
{
	int* tmp;
	tmp = i;
	i = j;
	j = tmp;

}
int main()
{
	int i = 5, j = 6;
	Swap(&i, &j);
	printf("%d与%d", i, j);
	system("pause");
	return 0;
}
*/
/*
int sushu(int n)
{
	int i;
	for (i = 2; i < sqrt(n); ++i)
	
	{
		if (n%i == 0)
			return -1;

	}
	if (i >=sqrt(n))
		return 1;


}



int main()
{
	int n;
	printf("请输入一个数：");
	scanf("%d",&n);
	int c;
	c = sushu(n);
	if (c==1)
		printf("是素数");
	else if (c == -1)
		printf("不是素数");
}*/


