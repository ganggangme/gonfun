#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
//Ʋ��
int main() {
	double  ans1, ans2;
	int a, b, c;
	scanf("%d %d %d", &a, &b, &c);
	if (a == 0)
		ans1 = c / b * (-1);
	else
	{
		ans1 = (double)b * b - 4 * a * c;
		if (ans1 >= 0)
		{
			ans1 = (double)(-b + sqrt(b * b - 4 * a * c) / (2 * a));
			ans2 = (double)(-b - sqrt(b * b - 4 * a * c) / (2 * a));
			printf("���� %lf�Դϴ�.", ans1);
			printf("���� %lf�Դϴ�.", ans2);
		}
		else if (ans1 == 0)
		{
		ans1 = (double)(-b + sqrt(b * b - 4 * a * c) / (2 * a));
		printf("���� %lf�Դϴ�.", ans1);
		}
		else 
			printf("���� ����Դϴ�.");
	}
	return 0;
}