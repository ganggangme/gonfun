#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int a, c;
	char b;
	printf("수식을 입력하시오");
	printf("\n<예 2+5>");
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
		printf("잘못 입력하셨습니다.");
	return 0;
}