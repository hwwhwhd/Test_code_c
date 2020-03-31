/*
1.实现一个函数，可以左旋字符串中的k个字符。
ABCD左旋一个字符得到BCDA
ABCD左旋两个字符得到CDAB
方法1
将字符串第一个的字符先复制一份，然后依次将字符串向左移动一位，再将第一个字符赋值到最后。若要左旋K个字符，只需循环K次。
方法2
将字符串分为两部分，先将前K个字符逆置，再将后一部分字符串逆置，最后将整个字符串逆置。
方法3
先开辟一个2*len+1字节的空间，在字符串c后面在连接一个同样的字符串c，如ABCDEABCDE,要求左旋k个字符的字符串，只需偏移k次，将接下来的len个字符复制到字符数组c中。

*/
/*
//方法三代码
#include <stdio.h>
#include <string.h>
void Left(char* c, int len, int k)
{
	
	k = k%len;
	char *p = (char *)malloc((len * 2 + 1)*sizeof(c[0]));
	strcpy(p, c);
	strcat(p, c);
	strncpy(c, p + k, len);
			
	free(p);
}
int main()
{
	char c[] = "ABCDE";
	int k = 2;
	int len = strlen(c);
	printf("左旋前：%s\n", c);
	Left(c, len, k);
	printf("左旋后：%s\n", c);
	return 0;
}*/
/*...
功能：把src所指由NULL结束的字符串的前n个字节复制到dest所指的数组中。
说明：如果src的前n个字节不含NULL字符，则结果不会以NULL字符结束。
如果src的长度小于n个字节，则以NULL填充dest直到复制完n个字节。
src和dest所指内存区域不可以重叠且dest必须有足够的空间来容纳src的字符串。
返回指向dest的指针（该指向dest的最后一个元素）
...*/




/*2.
判断一个字符串是否为另外一个字符串旋转之后的字符串。
例如：给定s1 = AABCD和s2 = BCDAA，返回1
给定s1 = abcd和s2 = ACBD，返回0.

AABCD左旋一个字符得到ABCDA
AABCD左旋两个字符得到BCDAA

AABCD右旋一个字符得到DAABC

int findLeftMove(char* str, char * substr)
{
	int strLen = strlen(str);
	int substrLen = strlen(substr);
	if (strLen != substrLen)
		return -1;
	char *p = (char *)malloc((strLen * 2 + 1)* sizeof(char));
	strcpy(p, str);
	strcat(p, str);
	if (strstr(p, substr))
		return 1;
	return -1;
	free(p);
}*/
//定义：strstr(str1,str2) 函数用于判断字符串str2是否是str1的子串。如果是，则该函数返回str2在str1中首次出现的地址；否则，返回NULL。
/*比如：
char str2 = “cdef”；
char str1 = “abcdefgh”；
则通过函数，将返回
strstr(str1, str2) = cdefgh；
*/
/*int main()
{
	char str[20];
	char substr[20];
	int ret = 0;
	printf("请输入初始字符串:\n");
	scanf("%s", str);
	printf("请输入要查找的左旋后的字符串:\n");
	scanf("%s", substr);
	ret = findLeftMove(str, substr);
	if (ret == 1)
	{
		printf("找到了\n");
	}
	else if (ret == -1)
	{
		printf("没有找到\n");
	}
	return 0;
}
*/