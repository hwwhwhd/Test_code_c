
/*
1.��ɲ�������Ϸ��

2.д����������������������в�����Ҫ�����֣�
�ҵ��˷����±꣬�Ҳ�������-1.���۰���ң�

3.��д����ģ��������������ĳ�����
����������������룬������ȷ����ʾ����¼�ɹ���,�������
�����������룬����������Ρ����ξ�������ʾ�˳�����

4.��дһ�����򣬿���һֱ���ռ����ַ���
�����Сд�ַ��������Ӧ�Ĵ�д�ַ���
������յ��Ǵ�д�ַ����������Ӧ��Сд�ַ���
��������ֲ������




*/
#include<stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)

/*int main()
{
	int arr[] = { 0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11, 12, 23, 34, 45, 56, 67, 78, 89, 90 };
	int k = 23;
	int left = 0;//���±�
	int right = sizeof(arr) / sizeof (arr[0]) - 1;//���±�
	
	while (left <= right)
	{

		int mid = (right + left) / 2;
		if (k == arr[mid])
		{
			printf("�ҵ���%d",k);
			break;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
			left = mid + 1;
	}
	if (left>right)
	   printf("�Ҳ���");
	
system("pause");
return 0;
}

*/

/*
int my_strcmp(char const *p, char const *q)
{
	while (*p == *q)
	{
		if (*p == '\0')
			return 0;
		p++;
		q++;

	}
	if (*p > *q) return 1;
	if (*p < *q) return -1;

}
int main()
{
	char *str = "123456";
	char arr[10];
	
	int i;
	for (i = 0; i < 3; i++)
	
	{
		printf("����������:>");
		scanf("%s", arr);
		if (my_strcmp(str, arr) == 0)
		{
			printf("������ȷ");
			Sleep(2000);
			break;
		}
		else
		{
			printf("���������������");

		}
	}
	if (i=3)
		printf("�˳�����");
}
*/
/*
int main()
{
	int c;

	while ((c = getchar()) != EOF)
	{
		if (c <= 'Z'&&c >= 'A')
			printf("%c", c + 32);
		else if (c <= 'z'&&c >= 'a')
			printf("%c", c - 32);
		else if ('0'<=c&&c<='9')
			printf(" ");
	}

system("pause");
return 0;
}*/