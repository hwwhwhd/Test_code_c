/*��δ��ɣ�
1.�ݹ�ͷǵݹ�ֱ�ʵ�����n��쳲���������

2.��дһ������ʵ��n^k��ʹ�õݹ�ʵ��
3. дһ���ݹ麯��DigitSum(n)������һ���Ǹ����������������������֮�ͣ�
���磬����DigitSum(1729)����Ӧ�÷���1+7+2+9�����ĺ���19

4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������
5.�ݹ�ͷǵݹ�ֱ�ʵ��strlen
6.�ݹ�ͷǵݹ�ֱ�ʵ����n�Ľ׳�
7.�ݹ鷽ʽʵ�ִ�ӡһ��������ÿһλ
*/

/*4. ��дһ������ reverse_string(char * string)���ݹ�ʵ�֣�
ʵ�֣��������ַ����е��ַ��������С�
Ҫ�󣺲���ʹ��C�������е��ַ�������������*/
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
		*ch = '\0';       // ÿ�η�ת�����һ����ֵ0���´εݹ�Ͳ��ٴ���
		reverse_string(str + 1); // �ݹ����
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