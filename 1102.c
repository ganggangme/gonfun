#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {

	int number;
	printf("정수를 입력하시오:");
	scanf("%d", &number);
	switch (number) 
	{
		case 0:
			printf("없음\n");
			break; //break가 없을 경우 다음 줄이 계속 수행됨 (이 경우에 break가 없다면 '하나'가 출력되고 break문에 의해 나옴)
		case 1:
			printf("하나\n");
			break;
		case 2:
		case 3:
			printf("두서너개\n");
			break;
		default:
			printf("나머지\n");
	}
	int num;
	scanf("%d", &num);
	switch (num)
	{
	case 1:
		printf("연수\n"); //연수 상장 장학금 출력
	case 2:
		printf("상자\n"); //상장 장학금 출력
	case 3:
		printf("장학금\n");//장학금만 출력
		break;
	}

	int mon, day;
	printf("달을 입력하시오:");
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
		printf("% d월의 일수는 % d입니다.", mon, day);


	if (mon == 2)
		day = 28;
	else if (mon == 4 || mon == 6 || mon == 9 || mon == 11)
		day = 30;
	else
		day = 31;
	printf("% d월의 일수는 % d입니다.", mon, day);

	int num1, num2, ans;
	char ch;

	printf("수식을 입력하시오\n<예:2+5>\n>>");
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
	printf("신호등의 색깔 입력하시오오오오오오");
	scanf("%c", &light);
	switch (light)
	{
	case 'r':
	case 'R':
		printf("정지!");
		break;
//다른색도하기

	default:
		printf("잘못된 색상입니다.");
	}

	char eng;
	printf("글자를 입력하시오");
	scanf("%c", &eng);
	switch (eng)
	{
	case 'a':
	case 'e':
	case 'i':
	case 'o':
	case 'u':
		printf("%c는 모음입니다.", eng);
		break;
	default:
		printf("%c는 자음입니다.", eng);
	}
	return 0;
}

/*
switch문
switch (조건식) //조건식에는 정수값만 가능
{
	case c1:
		문장 1;
		break
	case c2:
		문장 2;
		break
		...
	default: //예외처리 (else와 같은 역할)
		문장;
		break;
		46911
*/