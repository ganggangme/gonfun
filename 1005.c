#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	char initial, grade;
	printf("영어 이름 첫글자는 무엇인가요:");
	scanf("%c", &initial);
	printf("프그래밍 과목 학점을 물어보아도 되나요?(A부터 F)");
	scanf(" %c", &grade);
	printf("%c군의 과목 성적은 %c입니다.", initial, grade);
	/*
	int day1, day2, day3, money;
	float discount;
	printf("오늘의 날짜를 입력하시오:");
	scanf("%d.%d.%d", &day1, &day2, &day3); // 겹치는 거 scanf에 문자로 입력하기
	printf("\n요즘 영화 한 편 보려면 얼마나 하나요?");
	scanf("%d", &money);
	printf("\n멤버쉽 카드가 있으면 얼마나 할인되나요?");
	scanf("%f", &discount);

	printf("\n\n%d년 %d월 %d일 저녁에\n", day1, day2, day3);
	printf("%d원으로 영화 한 편 보면 어때요?\n", money);
	printf("%.2f%%나 할인받을 수 있는데요!", discount);

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
	printf("퀴즈 성적: ");
	scanf("%lf", &quiz1);
	printf("\n퀴즈 성적: ");
	scanf("%lf", &quiz2);
	printf("\n======MID-TERM======\n");
	printf("중간고사 성적: ");
	scanf("%lf", &minterm);
	printf("\n======FINAL======\n");
	printf("기말고사 성적: ");
	scanf("%lf", &fin);
	printf("\nQuizz Total: %lf", quiz1 + quiz2);
	printf("\nMid: %lf", minterm);
	printf("\nFinal: %lf", fin);
	printf("\n.....................................................................\n");
	printf("Total: %lf", quiz1 + quiz2 + minterm + fin);

	double num1, num2;
	printf("2개의 실수를 입력하시오: ");
	scanf("%lf %lf", &num1, &num2);

	printf("합의 정수부 = %d", (int) (num1 + num2)); // (int) 캐스트 연산자. 이 순간만 정수로 처리
	
	char number;
	printf("문자를 입력하시오: ");
	scanf("%c", &number);
	printf("ASCII 코드: %d", number);
	*/

	return 0;
}

/*
자료형
정수형 /  실수형 / 문자형
short 2bite
int 4bite
long 4bite
long long 8bit

float 4bit
double 4bite
etc

unsigned short value; (음수 X 음수 고려 안 하기 때문에 양수 쪽으로 숫자 할당 가능)
*/