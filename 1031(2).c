#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, c;
	char b;
	printf("������ �Է��Ͻÿ�");
	printf("\n<�� 2+5>");
	print("\n>>");
	scanf("%d %c %d", &a, &b, &c);
	if (c == '+')
		printf("%d", a + c);
	else if (c == '-')
		printf("%d", a - c);
	else if (c == '*')
		printf("%d", a * c);
	else if (c == '/')
		printf("%f", (float)a / c);
	else
		printf("�߸� �Է��ϼ̽��ϴ�.");
	return 0;
}