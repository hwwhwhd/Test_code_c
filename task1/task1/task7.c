/*（未完成）
1.递归和非递归分别实现求第n个斐波那契数。

2.编写一个函数实现n^k，使用递归实现
3. 写一个递归函数DigitSum(n)，输入一个非负整数，返回组成它的数字之和，
例如，调用DigitSum(1729)，则应该返回1+7+2+9，它的和是19

4. 编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。
5.递归和非递归分别实现strlen
6.递归和非递归分别实现求n的阶乘
7.递归方式实现打印一个整数的每一位
*/

/*4. 编写一个函数 reverse_string(char * string)（递归实现）
实现：将参数字符串中的字符反向排列。
要求：不能使用C函数库中的字符串操作函数。*/
/*

#include<windows.h>
#pragma warning (disable :4996)



#include <stdio.h>
#include <string.h>
#include <assert.h>
int  reverse_string(char * str)
{
	assert(str);
	int len = strlen(str);
	char *ch = str + len - 1;
	while (len>1)
	{
		char tmp = *str;
		*str = *ch;
		*ch = '\0';       // 每次反转将最后一个赋值0，下次递归就不再处理
		reverse_string(str + 1); // 递归调用
		*ch = tmp;
		len--;
	}
	return 0;
}
int main()
{
	char src[] = "abcdef";
	reverse_string(src);
	printf("%s", src);
	return 0;

}
*/