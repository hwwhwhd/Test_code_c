/*
1. �����������α�����ֵ��������ֵ�����ݽ��н����� 
2. ����������ʱ���������������������ݣ������⣩ 
3.��10 �����������ֵ�� 
4.�����������Ӵ�С����� 
5.�������������Լ��


*/
#include<stdio.h>
#include<windows.h>
/*
int main()
{
	int i,j,tmp;
	printf("��ֱ�������������:");
	scanf("%d %d",&i,&j);
	
	tmp = i;
	i = j;
	j = tmp;
	printf("������%d��%d", i, j);
	system("pause");
	return 0;
}
*/
//��������ʱ����
/*
int main()
{
	int a = 2, b = 4;
	a = a + b;
	b = a - b;
	a = a - b;
	printf("������%d��%d\n", a, b);
	system("pause");
	return 0;
}
*/

/*
int bigDigit(int* a)
{
	int b=a[0],i;
	for (i = 1; i < 10; ++i)
	{
		if (a[i]>b)
			b = a[i];
	}
	return b;
}
int main()
{
	int a[] = { 1, 2,6, 4, 5, 88, 7, 8, 9, 10 };
	printf("%d", bigDigit(a));
	system("pause");
	return 0;
}
*/

/*
int main()
{
	int a = 52, b = 224, c = 6;
	int tmp;
	
	
	if (a < b)
	{
		tmp = a;
		a = b;
		b = tmp;
	}
	if (a < c)
	{
		tmp = a;
		a = c;
		c = tmp;
	}
	if (b < c)
	{
		tmp =b;
		b = c;
		c = tmp;
	}
	printf("%d,%d,%d", a, b, c);
	system("pause");
	return 0;
}*/

//��Լ��
/*
void is(int a, int b)
{    
	int i;
	if (a <= b)
	{
		for (i= a;i>0;i--)
			if ((b%i) == 0 && (a%i) == 0)
			{
				printf("%d", i);
				break;
			}
	}
	else
	{   
		int j;
		for (j = b; j>0; j--)
			if ((b%j)== 0 && (a%j )== 0)
			{
				printf("%d", j);
				break;
			}
	}

	

}
int main()
{
	int a = 4, b = 16;
	is(a,b);
	system("pause");
	return 0;
}
*/