/*
1.һ��������ֻ�����������ǳ���һ�Σ�
�����������ֶ����������Ρ�
�ҳ�������ֻ����һ�ε����֣����ʵ�֡�
//����һ����ʱ����k=0�����Ͻ�����ÿ����������ÿ��Ԫ�رȽϣ�������������k++,Ȼ���ж�k�Ƿ����1�����Ϊ1���������������ֻ����һ�Σ����k=2��˵���������Ρ�
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
			    printf("����һ�ε�����:%d\n",arr[i]);
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



/*(����)
2.����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ��
��20Ԫ�����Զ�����ˮ��
���ʵ�֡�
#include <stdio.h>
#include <stdlib.h>
int num(int n)
{
	if (n != 0)//��Ԫ������ƿ
	{
		if (n != 1)//һԪ����һƿ
		{
			if (n % 2 == 0)//ż��
			{
				return n + num(n / 2);//ż��ֱ�ӷ��ص�n�еĸ����ӵ�n-1�еĸ���
			}
			else//����
			{
				return (n - 1) + num((n / 2) + 1);//����ʱ�ɵ�n�����µ�һ��Ų����n-1�У���n-1�еĽ��м���
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
	printf("������Ǯ����\n");
	scanf("%d", &n);
	printf("%dԪ���Ժ�%dƿ��ˮ����\n", n, 2 * n - 1);//����һ���ҹ��ɣ����ɸպ���nԪǮ�ܺ�2*n-1ƿˮ��
	printf("%dԪ���Ժ�%dƿ��ˮ����\n", n, num(n));//���������õݹ�ķ������㣻
	system("pause");
	return 0;
}

*/

/*
3.ģ��ʵ��strcpy
4.ģ��ʵ��strcat
1.ʵ��strcpy
2.ʵ��strcat
3.ʵ��strstr
4.ʵ��strchr
5.ʵ��strcmp
6.ʵ��memcpy
7.ʵ��memmove

1.ģ��ʵ��strncpy
2.ģ��ʵ��strncat
3.ģ��ʵ��strncmp

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