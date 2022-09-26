#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define PI 3.14

int main() {
	/*
	double grade;

	printf("학점을 입력하시오:");
	scanf("%lf", &grade);

	printf("학점이 %.2lf이시군요! \n", grade);
	
	int num1, num2, num3;
	printf("정수를 입력하시오:");
	scanf("%d", &num1);
	printf("정수를 입력하시오:");
	scanf("%d", &num2);
	printf("정수를 입력하시오:");
	scanf("%d", &num3);
	printf("평균값은 %lf입니다.\n", (num1 + num2 + num3) / 3.0);
	
	int num4, num5, num6;
	printf("세 개의 정수를 넣어주세요:");
	scanf("%d %d %d", &num4, &num5, &num6);
	printf("합은 %d이고 평균은 %lf입니다.", num4 + num5 + num6, (num4 + num5 + num6) / 3.0);
	*/
	double r, s,rou;


	printf("원의 반지름을 입력하시오:");
	scanf("%lf", &r);
	s = r * r * PI;
	rou = 2 * PI * r;

	printf("원의 면적: %.2lf\n", s);
	printf("원의 둘레: %.2lf", rou);
	return 0;
}

/*
double 로 입력 -> %lf(엘)

값을 두 개 받을 경우
scanf("%d %d", &a, &b)  #두 개를 받는 경우 변수 사이에 , 사용 금지(값이 제대로 받아지지 않음)
&: 번지 연산자 메모리를 지정해 줌

#define _CRT_SECURE_NO_WARNINGS
가장 윗 줄에 적어야 한다



*/