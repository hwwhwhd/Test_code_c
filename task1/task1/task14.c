/*
1.ʵ��һ�����������������ַ����е�k���ַ���
ABCD����һ���ַ��õ�BCDA
ABCD���������ַ��õ�CDAB
����1
���ַ�����һ�����ַ��ȸ���һ�ݣ�Ȼ�����ν��ַ��������ƶ�һλ���ٽ���һ���ַ���ֵ�������Ҫ����K���ַ���ֻ��ѭ��K�Ρ�
����2
���ַ�����Ϊ�����֣��Ƚ�ǰK���ַ����ã��ٽ���һ�����ַ������ã���������ַ������á�
����3
�ȿ���һ��2*len+1�ֽڵĿռ䣬���ַ���c����������һ��ͬ�����ַ���c����ABCDEABCDE,Ҫ������k���ַ����ַ�����ֻ��ƫ��k�Σ�����������len���ַ����Ƶ��ַ�����c�С�

*/
/*
//����������
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
	printf("����ǰ��%s\n", c);
	Left(c, len, k);
	printf("������%s\n", c);
	return 0;
}*/
/*...
���ܣ���src��ָ��NULL�������ַ�����ǰn���ֽڸ��Ƶ�dest��ָ�������С�
˵�������src��ǰn���ֽڲ���NULL�ַ�������������NULL�ַ�������
���src�ĳ���С��n���ֽڣ�����NULL���destֱ��������n���ֽڡ�
src��dest��ָ�ڴ����򲻿����ص���dest�������㹻�Ŀռ�������src���ַ�����
����ָ��dest��ָ�루��ָ��dest�����һ��Ԫ�أ�
...*/




/*2.
�ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
���磺����s1 = AABCD��s2 = BCDAA������1
����s1 = abcd��s2 = ACBD������0.

AABCD����һ���ַ��õ�ABCDA
AABCD���������ַ��õ�BCDAA

AABCD����һ���ַ��õ�DAABC

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
//���壺strstr(str1,str2) ���������ж��ַ���str2�Ƿ���str1���Ӵ�������ǣ���ú�������str2��str1���״γ��ֵĵ�ַ�����򣬷���NULL��
/*���磺
char str2 = ��cdef����
char str1 = ��abcdefgh����
��ͨ��������������
strstr(str1, str2) = cdefgh��
*/
/*int main()
{
	char str[20];
	char substr[20];
	int ret = 0;
	printf("�������ʼ�ַ���:\n");
	scanf("%s", str);
	printf("������Ҫ���ҵ���������ַ���:\n");
	scanf("%s", substr);
	ret = findLeftMove(str, substr);
	if (ret == 1)
	{
		printf("�ҵ���\n");
	}
	else if (ret == -1)
	{
		printf("û���ҵ�\n");
	}
	return 0;
}
*/