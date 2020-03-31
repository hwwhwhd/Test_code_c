/*
1.一个数组中只有两个数字是出现一次，
其他所有数字都出现了两次。
找出这两个只出现一次的数字，编程实现。
//定义一个临时变量k=0，不断将数组每个数与数组每个元素比较，如果两个数相等k++,然后判断k是否等于1。如果为1，则这个数在数组只出现一次；如果k=2，说明出现两次。
void  find_num(int* arr, int sz)
{
	int i,j;
	for (i = 0; i < sz; ++i)
	{
		int k = 0;
		for (j = 0; j < sz; ++j)
		{
			if (arr[i] == arr[j])
				k++;
		}
		if (k == 1)
			    printf("出现一次的数字:%d\n",arr[i]);
	}
}
int main()
{
int arr[] = { 1, 2, 3, 4, 1, 2, 3, 5 };
int sz = sizeof(arr) / sizeof(arr[0]);
find_num(arr, sz);
system("pause");
return 0;
}*/



/*(不会)
2.喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，
给20元，可以多少汽水。
编程实现。
#include <stdio.h>
#include <stdlib.h>
int num(int n)
{
	if (n != 0)//零元返回零瓶
	{
		if (n != 1)//一元返回一瓶
		{
			if (n % 2 == 0)//偶数
			{
				return n + num(n / 2);//偶数直接返回第n行的个数加第n-1行的个数
			}
			else//奇数
			{
				return (n - 1) + num((n / 2) + 1);//奇数时吧第n行余下的一个挪到第n-1行，按n-1行的进行计算
			}
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}
int main()
{
	int n = 0;
	printf("请输入钱数：\n");
	scanf("%d", &n);
	printf("%d元可以喝%d瓶汽水！！\n", n, 2 * n - 1);//方法一：找规律，规律刚好是n元钱能喝2*n-1瓶水；
	printf("%d元可以喝%d瓶汽水！！\n", n, num(n));//方法二：用递归的方法计算；
	system("pause");
	return 0;
}

*/

/*
3.模拟实现strcpy
4.模拟实现strcat
1.实现strcpy
2.实现strcat
3.实现strstr
4.实现strchr
5.实现strcmp
6.实现memcpy
7.实现memmove

1.模拟实现strncpy
2.模拟实现strncat
3.模拟实现strncmp

*/
#include <stdio.h>
#include <string.h> 

int main() {
	char buffer1[] = "DWgaOtP12df0";   char buffer2[] = "DWGAOTP12DF0";

	int n;

	n = memcmp(buffer1, buffer2, sizeof(buffer1));

	if (n>0) 
		printf("'%s' is greater than '%s'.\n", buffer1, buffer2);   
	else if (n<0) 
		printf("'%s' is less than '%s'.\n", buffer1, buffer2);   
	else 
		printf("'%s' is the same as '%s'.\n", buffer1, buffer2);

	return 0;
}