/*
1. ��ӡ100~200֮�������
2. ����˷��ھ���
3. �ж�1000��-- - 2000��֮�������

4.
дһƪ���͡�̸̸
1>дһ�����ҽ���
2>�г����̵�Ŀ�ꡣ
3>�������ôѧϰ��̣�
4>�������ѧϰ����������ÿ�ܻ��Ѷ���ʱ�䣿
5>����������һ��IT��˾��
�����ӷ��Ҳ������༶Ⱥ�
*/
#include<stdio.h>
#include<math.h>

//���淽��
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
			printf("������%d\n", i);

		}

	}
	printf("������%d\n", count);
	    

}

*/
//������ϸ��һ�룺
//1.ż����Ϊ2�������������ż�� ������Ϊ��������ȥ����Χ�ڵ�ż��������Ĺ�ģ����С��һ�룬
//2.�ж�һ����n�Ƿ�Ϊ�������Ƿ�Ҫ��2~nȫ������һ�顣�ٿ��� i����sqrt(n)��Ĳ��軹��Ҫ�𣿺������ǲ���Ҫ�ģ�
//ͨ�����Ͽ��ǣ��Ľ����룺
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
		printf("����:%d\n", i);

	
	}
}
*/




//2. ����˷��ھ���
/*
int main()
{

	int i, j;
	for (i = 1; i <= 9; i++)
	{
		for (j = 1; j <= i; j++)
		{
		  printf("%d*%d=%d\t", i, j, i*j);//�Ʊ��\t
		}
		printf("\n");
	}
     return 0;
}
*/
//3. �ж�1000��-- - 2000��֮�������
/*
�ж���������Ƿ�Ϊ���꣬��Ҫ�������������е�����һ����
�� ������ܱ� 4 ����ͬʱ���ܱ� 100 ������
�� ������ܱ�400������
*/
/*int main()
{
	int year, a;
	printf("���������\n");
	scanf("%d",&year);
	if (year % 400 == 0)
		printf("%d������",year);
	else if (year % 4 == 0 && year % 100 != 0)
		printf("%d������",year);
	else
		printf("%d��������",year);

	return 0;
}
*/