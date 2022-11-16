#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j,k;
	for (i = 1; i <= 7; i++) {
		for (j = 1; j <= i; j++) 
			printf("%d", j);
		for (k = 7 - i; k >= 1; k--)
			printf("*");
		
		printf("\n");
	}

	/*
	int num, ans, i=0;
	ans = 59;
	while (1) {
		printf("정답을 추측하여 보시오:");
		scanf("%d", &num);
		i++;
		if (num > ans)
			printf("제시한 정수가 낮습니다.");
		else if (num < ans)
			printf("제시한 정수가 높습니다.");
		else{
			printf("축하합니다. 시도횟수 %d", i);
			break;
		}
	}

	double capacity, battery, charge;
	capacity = 3000.0;
	printf("현재 남아있는 충전량: %lf\n", capacity);
	for (;;) {
		printf("충전/사용:");
		scanf("%lf", &charge);
		battery += charge;
		if (battery > 5000.0)
			battery = 5000.0;
		else if (battery < 0.0) {
			battery = 0.0;
			break;
		}
		else if (battery <= (capacity * 0.1))
			break;
		printf("현재 남아있는 충전량: %lf\n", battery);
	}// while문의 경우 while(battery > capacity*0.10){... 으로 짜면 됨
	printf("경고, 충전 필요");


	int i;
	for (i = 0; i < 10; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d", i);
	}
	

	int i=0, score, sum=0;
	double avg;
	for (;;) {
		printf("점수를 입력하세요:");
		scanf("%d", &score);
		if (score < 0)
			break;
		sum += score;
		i++;

	}
	avg = (double)sum / i;
	printf("평균은? %.1lf", avg);


	int i, j;
	for (i = 1; i <= 6; i++) {
		for (j = 1; j <= 6; j++) {
			if(i+j==7)
				printf("%d %d\nk", i, j);
		}	
	}
	*/
	return 0;
}