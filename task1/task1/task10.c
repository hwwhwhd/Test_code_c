/*����ɣ�

1.
c����ԭ�ͣ�
int count_one_bits(unsigned int value)
{
// ���� 1��λ��
}

c
*/
/*
2.��ȡһ�������������������е�ż��λ������λ���ֱ�������������С�


#include <stdio.h>  
int main()
{
	int num = 0, i = 0;
	scanf("%d", &num);
	printf("��������Ϊ��");
	for (i = 31; i >= 0; i-=2)
	{
		printf("%d ",(num>>i)&1);//Ҳ�ǿ���32�Σ�ÿ����������32λ���㣩��ֻ�Ǵ�31λ��ʼ�ƶ�  

	}
	printf("\n");
	printf("ż������Ϊ��");
	for (i = 30; i >= 0; i -= 2)
	{
		printf("%d ", (num >> i) & 1);
	}
	printf("\n");
	return 0;
}
*/
/*

3. ���һ��������ÿһλ��
#include<stdio.h>
int main()
{
	int i, num;
	scanf("%d", &num);

	for (i = 31; i >= 0; --i)
	{
		printf("%d ", (num >> i) & 1);
	}
	return 0;
}*/
/*
4.���ʵ�֣�
����int��32λ������m��n�Ķ����Ʊ���У�
�ж��ٸ�λ(bit)��ͬ��
��������:
1999 2299
�������:7



#include<stdio.h>
int main()
{
	int m, n,i,count=0;
	scanf("%d %d",&m,&n);
	for (i = 0; i <= 31; i++)
	{
		if (((m >> i)&1) != ((n >> i)&1))//����ȵĸ���
			count++;


	}
	printf("%d",count);


	return 0;
}*/