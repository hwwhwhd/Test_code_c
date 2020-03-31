/*
1.
编写函数：
unsigned int reverse_bit(unsigned int value);
这个函数的返回值是value的二进制位模式从左到右翻转后的值。
如：
在32位机器上25这个值包含下列各位：
00000000000000000000000000011001
翻转后：（2550136832）
10011000000000000000000000000000
程序结果返回：
2550136832
解析：
    这段代码的核心就在于实现函数的过程中，循环拿出二进制序列的每一位，并把它们整个翻转过来。
那我们只需用value循环向右移动，每移动一位与1进行与运算保留这一位，然后再将它乘相应的权重即可翻转过去。
代码如下：

#include<windows.h>
#pragma warning (disable :4996)
#include <stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value);
int main()
{
	unsigned int value;
	printf("请输入一个数：");
	scanf("%d", &value);
	printf("%u", reverse_bit(value));
	system("pause");
	return 0;

}
unsigned int reverse_bit(unsigned int value)
{
	int i;
	unsigned int ret = 0;
	for (i = 0; i < 32; i++)
	{
		//ret += ((value >> i) & 1)*pow(2, 31 - i);
		ret += ((value >> i) & 1) << (31-i);

		//很明显方法二比方法一要简洁明了，最重要的是方法二时间、空间复杂度都小于方法一。
	}
	return ret;

}
*/



//
/*
2.不使用（a+b）/2这种方式，求两个数的平均值。
int add(int x,int y)
{
	{ 
		int tmp;
		tmp = x^y;
		y = x&y;
		x = tmp;
		y <<= 1;//进位
	
	
	}while (y != 0);
	return x;
}
int avg(int x, int y)//②用来求平均值的函数
{
	return add(((x^y) >> 1), x&y);
}
int main()//主函数
{
int a = 0;
int b = 0;
printf("Input two number:");
scanf("%d %d",&a,&b);
printf("%d\n",avg(a,b));

system("pause");
return 0;
}*/
/*
3.编程实现：
一组数据中只有一个数字出现了一次。其他所有数字都是成对出现的。
请找出这个数字。（使用位运算）
*/


/*
4.
有一个字符数组的内容为:"student a am i",
请你将数组的内容改为"i am a student".
要求：
不能使用库函数。
只能开辟有限个空间（空间个数和字符串的长度无关）。

student a am i
i ma a tneduts
i am a student
*/