/*
1.��������ʹ����ȫ����λ��ż��ǰ�档
��Ŀ��
����һ���������飬ʵ��һ��������
�����������������ֵ�˳��ʹ�����������е�����λ�������ǰ�벿�֣�
����ż��λ������ĺ�벿�֡�

#include <stdio.h>
#include <stdlib.h>


void func(int arr[], int size)
{
	int  i;
	int  temp;
	int  j = size - 1;
	for (i = 0; i != j; i++)
	{
		if (arr[i] % 2 != 0)//��Ϊ����
		{
			continue;
		}
		else 
		{//����,��������������ż��
			temp = arr[i];
			arr[i] = arr[j];
			arr[j] = temp;
			//�����������ż���Ļ�j--,��һ�������Ļ�ͣ��������,�ȴ���һ������
			if (arr[j] % 2 == 0)
				{
					j--;
				}
			i--;   //��i--�ص��ղŵ�λ���жϽ�����������������ż��
	    }
	}
}
int main() 
{
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int i;
	int size = sizeof(arr) / sizeof(int);
	func(arr, size);
	printf("����:\n");
	for (i = 0; i<size; i++) 
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
*/
/*
2.
//
���Ͼ���
��һ����ά����.
�����ÿ�д������ǵ����ģ�ÿ�д��ϵ����ǵ�����.
�������������в���һ�������Ƿ���ڡ�
ʱ�临�Ӷ�С��O(N);

���飺
1 2 3
2 3 4
3 4 5


1 3 4
2 4 5
4 5 6

1 2 3
4 5 6
7 8 9

*/
/*
#include<stdio.h>
#include<stdlib.h>
int Find_number(int arr[3][3], int *px, int *py, int key)
{
	int x=0;
	int y = *py - 1;
	while ((x <= (*py - 1)) && (y >= 0))//��֤x<=2,y>=0
	{
		if(arr[x][y] == key)
			return 1;
		else if (arr[x][y] < key)
			x++;
		else
			y--;
	}
	return 0;
}
int main()
{
	int arr[][3] = { 1, 2, 3, 4, 5, 6, 7, 8, 9 };
	int num = 0;
	int x = 3;//����Ϊ3
	int y = 3;//����Ϊ3
	int result = 0;
	scanf("%d", &num);
	result = Find_number(arr, &x, &y, num);//x��y����Ӧ�ĵ�ַ
	if (result)
	{
		printf("find it,the location is %d  %d\n", x, y);
	}
	else
		printf("can't find it\n");
	system("pause");
	return 0;
}
*/