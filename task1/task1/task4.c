/*
1.在屏幕上输出以下图案：
*
***
*****
*******
*********
***********
*************
***********
*********
*******
*****
***
*

2.求出0〜999之间的所有“水仙花数”并输出。
“水仙花数”是指一个三位数，其各位数字的立方和确好等于该数本身，如；153＝1＋5＋3?，则153是一个“水仙花数”。


在数论中，水仙花数（Narcissistic number）也称为自恋数、自幂数、阿姆斯壮数或阿姆斯特朗数（Armstrong number），是指一N位数，其各个数之N次方和等于该数。
例如153、370、371及407就是三位数的水仙花数，其各个数之立方和等于该数：
153 = 1^3 + 5^3 + 3^3。
370 = 3^3 + 7^3 + 0^3。
371 = 3^3 + 7^3 + 1^3。
407 = 4^3 + 0^3 + 7^3。



3.
求Sn = a + aa + aaa + aaaa + aaaaa的前5项之和，c其中a是一个数字，
例如：2 + 22 + 222 + 2222 + 22222


*/

#include<stdio.h>
#include<windows.h>
#include<math.h>
#pragma warning (disable :4996)
/*
int main()
{ 
	int a, b, c;
	for (int i = 100; i < 1000; i++)
	{ 
		a = i / 100;
		b = i / 10 % 10;
		c = i % 10;
		if (i == (pow(a, 3) + pow(b, 3) + pow(c, 3)))
			printf("水仙花数：%d\n", i);
	}
	system("pause");
	return 0;
}
*/
/*int main()
{
	int n, sum = 0;
	int k=0;
	scanf("%d", &n);
	for (int i = 0; i <= 4; i++)
	{
		k =k+ n*pow(10, i);
		sum += k;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}
*/