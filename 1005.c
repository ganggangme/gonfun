#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char initial, grade;
	printf("���� �̸� ù���ڴ� �����ΰ���:");
	scanf("%c", &initial);
	printf("���׷��� ���� ������ ����Ƶ� �ǳ���?(A���� F)");
	scanf(" %c", &grade);
	printf("%c���� ���� ������ %c�Դϴ�.", initial, grade);
	/*
	int day1, day2, day3, money;
	float discount;
	printf("������ ��¥�� �Է��Ͻÿ�:");
	scanf("%d.%d.%d", &day1, &day2, &day3); // ��ġ�� �� scanf�� ���ڷ� �Է��ϱ�
	printf("\n���� ��ȭ �� �� ������ �󸶳� �ϳ���?");
	scanf("%d", &money);
	printf("\n����� ī�尡 ������ �󸶳� ���εǳ���?");
	scanf("%f", &discount);

	printf("\n\n%d�� %d�� %d�� ���ῡ\n", day1, day2, day3);
	printf("%d������ ��ȭ �� �� ���� ���?\n", money);
	printf("%.2f%%�� ���ι��� �� �ִµ���!", discount);

	short year = 0;
	int sale = 0;
	long long total_sale = 0;

	year = 10;
	sale = 200000000;
	total_sale = year * sale;
	printf("%lld", total_sale);

	printf("%d \n", sizeof(short));
	printf("%d \n", sizeof(int));
	printf("%d \n", sizeof(long));
	printf("%d \n", sizeof(long long));


	double quiz1, quiz2, minterm, fin;
	printf("======QUIZZES======\n");
	printf("���� ����: ");
	scanf("%lf", &quiz1);
	printf("\n���� ����: ");
	scanf("%lf", &quiz2);
	printf("\n======MID-TERM======\n");
	printf("�߰���� ����: ");
	scanf("%lf", &minterm);
	printf("\n======FINAL======\n");
	printf("�⸻��� ����: ");
	scanf("%lf", &fin);
	printf("\nQuizz Total: %lf", quiz1 + quiz2);
	printf("\nMid: %lf", minterm);
	printf("\nFinal: %lf", fin);
	printf("\n.....................................................................\n");
	printf("Total: %lf", quiz1 + quiz2 + minterm + fin);

	double num1, num2;
	printf("2���� �Ǽ��� �Է��Ͻÿ�: ");
	scanf("%lf %lf", &num1, &num2);

	printf("���� ������ = %d", (int) (num1 + num2)); // (int) ĳ��Ʈ ������. �� ������ ������ ó��
	
	char number;
	printf("���ڸ� �Է��Ͻÿ�: ");
	scanf("%c", &number);
	printf("ASCII �ڵ�: %d", number);
	*/

	return 0;
}

/*
�ڷ���
������ /  �Ǽ��� / ������
short 2bite
int 4bite
long 4bite
long long 8bit

float 4bit
double 4bite
etc

unsigned short value; (���� X ���� ��� �� �ϱ� ������ ��� ������ ���� �Ҵ� ����)
*/