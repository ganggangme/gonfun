#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#define PI 3.141592

int main()
{
	float radius = 10.0f;
	double area;

	area = 4.0/3.0 * PI * radius * radius * radius;
	printf("���� ����: %f\n", area);

	int num1, num2, sum;
	num1 = 100;
	num2 = 200;
	sum = num1 + num2;
	printf("�� ���� ��: %d\n", sum);

	int num3 = 100;
	int num4 = 200;
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	printf("%d - %d = %d\n", num3, num4, num3 - num4);
	printf("%d * %d = %d\n", num3, num4, num3 * num4);
	printf("%d / %d = %d\n", num3, num4, num3 / num4);

	float x = 155.423, y = 20.787, z = 50.34;
	printf("x = % .3f, y = %.3f, z = %.3f\n", x, y, z);
	printf("x + y + z = %.3f\n", x + y + z);
	printf("x - y - z = %.3f\n", x - y - z);
	printf("x / y / z = %.3f\n", x / y / z);
	printf("(x * y)/ z = %.3f\n", (x * y)/ z);

	int num5 = 10; float num6 = 15.7f;
	printf("%d\n%.1f\n", num5, num6);

	//chapter 6    S T A R T!!!!!
	
	int age;
	char blood[3], name[20];

	printf("���̸� �Է��Ͻÿ�:");
	scanf("%d", &age);
	printf("�������� �Է��Ͻÿ�:"); //enter�� ���ڿ��� ��޵� 
	scanf(" %s", &blood, 3); //�ٷ� �Ѿ�� �� �����ϱ� ���� �����̽� �ٸ� �ϳ� ������ �Ѵ�
	printf("�̸��� �Է��Ͻÿ�:");
	scanf(" %s", &name, 20);
	printf("% d���̰� %s��, �̸��� %s�ñ���.�̽ñ���.\n", age, blood, name);

	return 0;
}

/*
��ȣ ���
#define PI 3.141592 (���� ���� ���� ���) ���� �빮�ڷ� ǥ��
������ �� �Ǽ��� �Է��ϸ� ����� �Է��ؾ� ��. 
*/