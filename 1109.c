#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> //INT_MAX�� �ֱ� ���� (���迡 �� ����, EOF�� �� ����)
int main() {
	int i = 1, j = 1;
	while (i < 10)
	{
		printf("==== %d �� ==== \n", i);
		while (j < 10)
		{
			printf("%d*%d=%d\n", i, j, i * j);
			j++;
		}
		i++; //�� ������ 0��
		j = 1; //�� ������ 5��(10�� ����)
	}

	
	/*
	int i = 1;
	int n;
	scanf("%d", &n);
	do
	{
		printf("Hello%d", n);

		n--;
	} while (n > 0);

	int sum=0, i = 1;
	do//do�� while �ڸ��� ���δ�
	{
		if (i % 3 == 0)
			printf("%d ", i);
		i++;
	}	while (i <= 100); //�����Ǵ�(�����ݷ� �� �ʿ�)
	// do while�� Ư¡: �ּ� 1���� �ڵ尡 ����
	


	int i = 1;
	int n;
	scanf("%d", &n);
	while (n>0)
	{
		printf("%d", n);

		n--;
	}
	printf("�߻�");


	int i = 1;
	int n;
	scanf("%d",&n);
	while (i <= 9)
	{
		printf("%d*%d = %d",n, i, n * i);
		i++;
	}


	int num = 1;
	int sum = 0;
	while (num != 0)
	{
		scanf("%d", &num);
		sum = sum + num;
	}
	printf("�հ�=%d", sum);

	int num, i, min, max;
	int sum = 0;
	scanf("%d", &i); //�ʱⰪ
	scanf("%d", &num); //������
	(i < num) ? (min = i, max = num) : (min = num, max = i); //�ִ밪 �ּڰ��� ���ؾ���

	while (min <= max)
	{
		sum = sum + min;
		min++;
	}
	printf("%d", sum);
	
	*/
	return 0;
}

/*
������ ����� �߰�: Ű���尡 ���� ����� ���� Insert Ű�� ������ �׷� ���̴�.
*/