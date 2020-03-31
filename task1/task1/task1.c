/*
1. 打印100~200之间的素数
2. 输出乘法口诀表
3. 判断1000年-- - 2000年之间的闰年

4.
写一篇博客。谈谈
1>写一个自我介绍
2>列出你编程的目标。
3>你打算怎么学习编程？
4>你打算在学习编程这件事上每周花费多少时间？
5>你最想进入的一家IT公司。
将链接发我并分享到班级群里。
*/
#include<stdio.h>
#include<math.h>

//常规方法
/*
int main()

{
	int i, j, count=0;
	for (i = 100; i <= 200; ++i)
	{
		for (j = 2; j < i; ++j)
		{
			if (i%j == 0)
				break;
			
		}
		if (i == j)
		{
			count++;
			printf("素数：%d\n", i);

		}

	}
	printf("个数：%d\n", count);
	    

}

*/
//但是仔细想一想：
//1.偶数均为2的整数倍，因此偶数 不可能为素数，可去掉范围内的偶数，问题的规模便缩小了一半，
//2.判断一个数n是否为素数，是否要从2~n全部遍历一遍。再考虑 i大于sqrt(n)后的步骤还需要吗？很明显是不需要的！
//通过以上考虑，改进代码：
/*
void Prime_judgement(int i);
int main()
{
	int i;
	for (i = 101; i < 200; i += 2)
	{
		Prime_judgement(i);

	}

	return 0;
}
void Prime_judgement(int i)
{
	int j;
	for ( j = 2; j <= sqrt(i); j++)
	{
		if (i%j == 0)
			break;

	}
	if (j > sqrt(i))
	{
		printf("素数:%d\n", i);

	
	}
}
*/




//2. 输出乘法口诀表
/*
int main()
{

	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
		  printf("%d*%d=%d\t", i, j, i*j);//制表符\t
		}
		printf("\n");
	}
     return 0;
}
*/
//3. 判断1000年-- - 2000年之间的闰年
/*
判断任意年份是否为闰年，需要满足以下条件中的任意一个：
① 该年份能被 4 整除同时不能被 100 整除；
② 该年份能被400整除。
*/
/*int main()
{
	int year, a;
	printf("请输入年份\n");
	scanf("%d",&year);
	if (year % 400 == 0)
		printf("%d是闰年",year);
	else if (year % 4 == 0 && year % 100 != 0)
		printf("%d是闰年",year);
	else
		printf("%d不是闰年",year);

	return 0;
}
*/