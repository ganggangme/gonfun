#include <stdio.h>

int main() {
	int i = 0; //�ʱⰪ
	while (i < 5) //���ǽ�
	{
		printf("ȯ���մϴ�.\n");
		i++; //������
	}
	printf("�ݺ��� ����Ǿ����ϴ�.");
	int j = 1;
	int sum = 0;
	while (j <= 10)
	{
		sum = sum + j;
		j++;
	}
	printf("�հ�=%d", sum);
	int grade;
	scanf_s("%d", &grade);
	switch (grade / 10)
	{
	case 10:
	case 9:
		printf("���� A");
		break;
	case 8:
		printf("���� B");
		break;
	case 7:
		printf("���� C");
		break;
	case 6:
		printf("���� D");
		break;
	case 5:
		printf("���� F");
		break;
	}
	return 0;
}


/*
<�ݺ����� �ʿ��� ��>
1. �ʱⰪ
2. ���ǽ�
3. ������



*/