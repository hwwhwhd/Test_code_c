/*
1.ʵ��һ����������ӡ�˷��ھ����ھ���������������Լ�ָ����
����9�����9*9�ھ�������12�����12*12�ĳ˷��ھ���

2.ʹ�ú���ʵ���������Ľ�����

3.ʵ��һ�������ж�year�ǲ������ꡣ

4.
����һ�����飬
ʵ�ֺ���init������ʼ�����顢
ʵ��empty����������顢
ʵ��reverse���������������Ԫ�ص����á�
Ҫ���Լ���ƺ����Ĳ���������ֵ��

5.ʵ��һ���������ж�һ�����ǲ�������*/
/*#include<stdio.h>
#include<windows.h>
#include<math.h>
#include <string.h>
#include <stdlib.h>
#pragma warning (disable :4996)
*/

/*sd
void A(int m)
{ 
	int i,j;
	for (i = 1; i <=m; i++)
	{
		for (j = 1; j <= i; j ++)
		{
			printf("%d*%d=%d\t", i, j, i*j);

		}
		printf("\n");

	}
}
int main()
{
	int i;
	printf("������һ����");
	scanf("%d", &i);
	A(i);
	system("pause");
	return 0;
}
*/
/*
void Swap(int *i, int *j)
{
	int* tmp;
	tmp = i;
	i = j;
	j = tmp;

}
int main()
{
	int i = 5, j = 6;
	Swap(&i, &j);
	printf("%d��%d", i, j);
	system("pause");
	return 0;
}
*/
/*
int sushu(int n)
{
	int i;
	for (i = 2; i < sqrt(n); ++i)
	
	{
		if (n%i == 0)
			return -1;

	}
	if (i >=sqrt(n))
		return 1;


}



int main()
{
	int n;
	printf("������һ������");
	scanf("%d",&n);
	int c;
	c = sushu(n);
	if (c==1)
		printf("������");
	else if (c == -1)
		printf("��������");
}*/


