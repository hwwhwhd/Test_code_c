/*
1.
��д������
unsigned int reverse_bit(unsigned int value);
��������ķ���ֵ��value�Ķ�����λģʽ�����ҷ�ת���ֵ��
�磺
��32λ������25���ֵ�������и�λ��
00000000000000000000000000011001
��ת�󣺣�2550136832��
10011000000000000000000000000000
���������أ�
2550136832
������
    ��δ���ĺ��ľ�����ʵ�ֺ����Ĺ����У�ѭ���ó����������е�ÿһλ����������������ת������
������ֻ����valueѭ�������ƶ���ÿ�ƶ�һλ��1���������㱣����һλ��Ȼ���ٽ�������Ӧ��Ȩ�ؼ��ɷ�ת��ȥ��
�������£�

#include<windows.h>
#pragma warning (disable :4996)
#include <stdio.h>
#include<math.h>
unsigned int reverse_bit(unsigned int value);
int main()
{
	unsigned int value;
	printf("������һ������");
	scanf("%d", &value);
	printf("%u", reverse_bit(value));
	system("pause");
	return 0;

}
unsigned int reverse_bit(unsigned int value)
{
	int i;
	unsigned int ret = 0;
	for (i = 0; i < 32; i++)
	{
		//ret += ((value >> i) & 1)*pow(2, 31 - i);
		ret += ((value >> i) & 1) << (31-i);

		//�����Է������ȷ���һҪ������ˣ�����Ҫ���Ƿ�����ʱ�䡢�ռ临�Ӷȶ�С�ڷ���һ��
	}
	return ret;

}
*/



//
/*
2.��ʹ�ã�a+b��/2���ַ�ʽ������������ƽ��ֵ��
int add(int x,int y)
{
	{ 
		int tmp;
		tmp = x^y;
		y = x&y;
		x = tmp;
		y <<= 1;//��λ
	
	
	}while (y != 0);
	return x;
}
int avg(int x, int y)//��������ƽ��ֵ�ĺ���
{
	return add(((x^y) >> 1), x&y);
}
int main()//������
{
int a = 0;
int b = 0;
printf("Input two number:");
scanf("%d %d",&a,&b);
printf("%d\n",avg(a,b));

system("pause");
return 0;
}*/
/*
3.���ʵ�֣�
һ��������ֻ��һ�����ֳ�����һ�Ρ������������ֶ��ǳɶԳ��ֵġ�
���ҳ�������֡���ʹ��λ���㣩
*/


/*
4.
��һ���ַ����������Ϊ:"student a am i",
���㽫��������ݸ�Ϊ"i am a student".
Ҫ��
����ʹ�ÿ⺯����
ֻ�ܿ������޸��ռ䣨�ռ�������ַ����ĳ����޹أ���

student a am i
i ma a tneduts
i am a student
*/