#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int number;
	printf("������ �Է��Ͻÿ�:");
	scanf("%d", &number);
	switch (number) 
	{
		case 0:
			printf("����\n");
			break; //break�� ���� ��� ���� ���� ��� ����� (�� ��쿡 break�� ���ٸ� '�ϳ�'�� ��µǰ� break���� ���� ����)
		case 1:
			printf("�ϳ�\n");
			break;
		case 2:
		case 3:
			printf("�μ��ʰ�\n");
			break;
		default:
			printf("������\n");
	}
	int num;
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("����\n"); //���� ���� ���б� ���
	case 2:
		printf("����\n"); //���� ���б� ���
	case 3:
		printf("���б�\n");//���бݸ� ���
		break;
	}

	int mon, day;
	printf("���� �Է��Ͻÿ�:");
	scanf("%d", &mon);

	switch (mon)
	{
	case 2:
		day = 28;
	case 4:
	case 6:
	case 9:
	case 11:
		day = 30;
		break;
	default:
		day = 31;
		break;
	}
		printf("% d���� �ϼ��� % d�Դϴ�.", mon, day);


	if (mon == 2)
		day = 28;
	else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
		day = 30;
	else
		day = 31;
	printf("% d���� �ϼ��� % d�Դϴ�.", mon, day);

	int num1, num2, ans;
	char ch;

	printf("������ �Է��Ͻÿ�\n<��:2+5>\n>>");
AAA: 	scanf("%d %c %d", &num1, &ch, &num2);
	switch (ch)
	{
	case '+':
		ans = num1 + num2;
		break;
	case '-':
		ans = num1 - num2;
		break;
	case '*':
		ans = num1 * num2;
		break;
	case '/':
		ans = num1 / num2;
		break;
	default:
		goto AAA;
	}
	printf("%d %c %d = %d", num1, ch, num2, ans);

	char light;
	printf("��ȣ���� ���� �Է��Ͻÿ�����������");
	scanf("%c", &light);
	switch (light)
	{
	case 'r':
	case 'R':
		printf("����!");
		break;
//�ٸ������ϱ�

	default:
		printf("�߸��� �����Դϴ�.");
	}

	char eng;
	printf("���ڸ� �Է��Ͻÿ�");
	scanf("%c", &eng);
	switch (eng)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("%c�� �����Դϴ�.", eng);
		break;
	default:
		printf("%c�� �����Դϴ�.", eng);
	}
	return 0;
}

/*
switch��
switch (���ǽ�) //���ǽĿ��� �������� ����
{
	case c1:
		���� 1;
		break
	case c2:
		���� 2;
		break
		...
	default: //����ó�� (else�� ���� ����)
		����;
		break;
		46911
*/