/*
1. 将数组A中的内容和数组B中的内容进行交换。（数组一样大）
2. 计算1/1-1/2+1/3-1/4+1/5 ⋯⋯ + 1/99 - 1/100 的值。
3. 编写程序数一下 1到 100 的所有整数中出现多少个数字9。

*/

#include<stdio.h>
#include<windows.h>
/*

void swap(int a[], int b[],int length)
int main()
{  
    int i,j;
	int a[8] = { 1, 2, 3, 4, 5, 6, 7, 8 };
	int b[8] = { 11, 12, 13, 14, 15, 16, 17, 18 };
	swap(a,b,sizeof(a)/sizeof(a[0]))
	for (i = 0; i < sizeof(a) / sizeof(a[0]); i++)
		printf("%的"，a[i]);
	for (j = 0; j < sizeof(a) / sizeof(a[0]); j++)
		printf("%的",a[j]);

	system("pause");
	return 0;
}
void swap(int a[], int b[],int  length)
{
	int i;
	for (i = 0; i < length; i++)
	{
		int tmp;
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;

	}
	



}
*/
/*
int main()
{
	int i = 1,m=1;
	double sum =0.0;
	while (i <= 100)
	{
		
		sum += 1.0 / (i*m);
		i++;
		m = m*(-1);
	
	}
	printf("%f", sum);

	system("pause");
	return 0;
}

*/

/*int main()
{
	int i = 1;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)
			sum++;
		if (i / 10 == 9)
			sum++;


	
	}
	printf("%d", sum);

	system("pause");
	return 0;
}
*/