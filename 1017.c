#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
	int A, B, max, min;
	A = 10; B = 5;
	max = (A > B) ? A : B;
	// ���̸� max=(max>c)?max:c; �� �߰��ϱ�
	printf("���� �����ڸ� �̿��Ͽ� ã�� '�� �� �� �� ū ��'��%d", max);
	min = (A > B) ? B: A;
	printf("���� �����ڸ� �̿��Ͽ� ã�� '�� �� �� �� ���� ��d", min);


	/*
	double x, y, g, t, vx, vy, t1x, t1y;
	x = 0.0; y = 0.0; g = 9.8;
	vx = 20.0; vy = 20.0;
	t = 1.0;
	t1x = x +vx* t;
	t1y = y + vy * t - 0.5 * g * t * t;
	printf("1������ ��ġ=(%lf,%lf)", t1x, t1y);
	printf("\n");
	t = 2.0;
	t1x = x + vx * t;
	t1y = y + vy * t - 0.5 * g * t * t;
	printf("2������ ��ġ=(%lf,%lf)", t1x, t1y);
	printf("\n");
	t = 3.0;
	t1x = x + vx * t;
	t1y = y + vy * t - 0.5 * g * t * t;
	printf("3������ ��ġ=(%lf,%lf)", t1x, t1y);
	printf("\n");



	double r, v;
	printf("�������� �Է��Ͻÿ�:");
	scanf("%lf", &r);
	v = (4.0 / 3.0) * PI * pow(r, 3); // �Ǽ� �������� ����� ���� �Ҽ����� �� ǥ���ϱ�
	printf("���� ����: %lf", v);


	int x = 10, y = 10;

	x += 1;
	y *= 2;

	printf("x= %d y = %d", x, y);
	*/
	return 0;
}



// ��� ������
// x += y   <=> x = x+ y 
//��� �����ڰ� ������! +-*/ %