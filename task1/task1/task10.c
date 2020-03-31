/*（完成）

1.
c程序原型：
int count_one_bits(unsigned int value)
{
// 返回 1的位数
}

c
*/
/*
2.获取一个数二进制序列中所有的偶数位和奇数位，分别输出二进制序列。


#include <stdio.h>  
int main()
{
	int num = 0, i = 0;
	scanf("%d", &num);
	printf("奇数序列为：");
	for (i = 31; i >= 0; i-=2)
	{
		printf("%d ",(num>>i)&1);//也是控制32次（每个整型数按32位来算），只是从31位开始移动  

	}
	printf("\n");
	printf("偶数序列为：");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	return 0;
}
*/
/*

3. 输出一个整数的每一位。
#include<stdio.h>
int main()
{
	int i, num;
	scanf("%d", &num);

	for (i = 31; i >= 0; --i)
	{
		printf("%d ", (num >> i) & 1);
	}
	return 0;
}*/
/*
4.编程实现：
两个int（32位）整数m和n的二进制表达中，
有多少个位(bit)不同？
输入例子:
1999 2299
输出例子:7



#include<stdio.h>
int main()
{
	int m, n,i,count=0;
	scanf("%d %d",&m,&n);
	for (i = 0; i <= 31; i++)
	{
		if (((m >> i)&1) != ((n >> i)&1))//不相等的个数
			count++;


	}
	printf("%d",count);


	return 0;
}*/