#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#define PI 3.14

int main() {
	int A, B, max, min;
	A = 10; B = 5;
	max = (A > B) ? A : B;
	// 셋이면 max=(max>c)?max:c; 를 추가하기
	printf("삼항 연산자를 이용하여 찾은 '두 수 중 더 큰 수'는%d", max);
	min = (A > B) ? B: A;
	printf("삼항 연산자를 이용하여 찾은 '두 수 중 더 작은 수d", min);


	/*
	double x, y, g, t, vx, vy, t1x, t1y;
	x = 0.0; y = 0.0; g = 9.8;
	vx = 20.0; vy = 20.0;
	t = 1.0;
	t1x = x +vx* t;
	t1y = y + vy * t - 0.5 * g * t * t;
	printf("1초후의 위치=(%lf,%lf)", t1x, t1y);
	printf("\n");
	t = 2.0;
	t1x = x + vx * t;
	t1y = y + vy * t - 0.5 * g * t * t;
	printf("2초후의 위치=(%lf,%lf)", t1x, t1y);
	printf("\n");
	t = 3.0;
	t1x = x + vx * t;
	t1y = y + vy * t - 0.5 * g * t * t;
	printf("3초후의 위치=(%lf,%lf)", t1x, t1y);
	printf("\n");



	double r, v;
	printf("반지름을 입력하시오:");
	scanf("%lf", &r);
	v = (4.0 / 3.0) * PI * pow(r, 3); // 실수 범위에서 계산할 때는 소수점을 꼭 표기하기
	printf("구의 부피: %lf", v);


	int x = 10, y = 10;

	x += 1;
	y *= 2;

	printf("x= %d y = %d", x, y);
	*/
	return 0;
}



// 축약 연산자
// x += y   <=> x = x+ y 
//모든 연산자가 가능함! +-*/ %