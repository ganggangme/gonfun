#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3, max;
	max = 0;
	printf("ù��° ����");
	scanf("%d",&num1);
	printf("�ι�°����");
	scanf("%d", &num2);
	printf("��°����");
	scanf("%d", &num3);
	if (num1 > num2)
		if (num1 > num3)
			max = num1;
		else
			if (num2 > num3)
				max = num2;
			else
				if (num2 > num3)
					max = num2;
				else
					max = num3;
	printf("%d", max);

	/*
	int couple, odd, num;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num);
	num = (num % 2 == 0) ? 1 : 2;
	printf("%d", num);
	*/
	return 0;
}

/*
A�� ���̸�
���� if�� ����~~~~~ 
<���̸� 1, �����̸� 0�� return�Ǿ� �´�>
x==y ����
x!=y ���� �ʴ�
x>=y x�� y���� ũ�ų� ���� (=�� �����ʿ� �ִ�)
&& and ��ȣ x�� y �� �� ��� ���� ���� 1 �� ��ȯ(return)
x && y AND���� (������)
x || y OR���� (������)
!x NOT���� ������ 0 �ƴϸ� ��� ������ �ν�
*/