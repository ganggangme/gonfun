#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

int main() {
	/*
	double grade;

	printf("������ �Է��Ͻÿ�:");
	scanf("%lf", &grade);

	printf("������ %.2lf�̽ñ���! \n", grade);
	
	int num1, num2, num3;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num1);
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num2);
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &num3);
	printf("��հ��� %lf�Դϴ�.\n", (num1 + num2 + num3) / 3.0);
	
	int num4, num5, num6;
	printf("�� ���� ������ �־��ּ���:");
	scanf("%d %d %d", &num4, &num5, &num6);
	printf("���� %d�̰� ����� %lf�Դϴ�.", num4 + num5 + num6, (num4 + num5 + num6) / 3.0);
	*/
	double r, s,rou;


	printf("���� �������� �Է��Ͻÿ�:");
	scanf("%lf", &r);
	s = r * r * PI;
	rou = 2 * PI * r;

	printf("���� ����: %.2lf\n", s);
	printf("���� �ѷ�: %.2lf", rou);
	return 0;
}

/*
double �� �Է� -> %lf(��)

���� �� �� ���� ���
scanf("%d %d", &a, &b)  #�� ���� �޴� ��� ���� ���̿� , ��� ����(���� ����� �޾����� ����)
&: ���� ������ �޸𸮸� ������ ��

#define _CRT_SECURE_NO_WARNINGS
���� �� �ٿ� ����� �Ѵ�



*/