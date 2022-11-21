#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
	int s[5] = { 5,3,2,1,8 };
	int min, i;
	min = s[0];
	for (i = 1; i < 5; i++) {
		if (min > s[i])
			min = s[i];
	}

	printf("%d", min);
	
	/*
	int score[5];
	int i;
	double avg=0;
	
	for (i = 0; i < 5; i++) {
		printf("%d: 점수를 넣어주세요.", i);
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
		avg += score[i];
	printf("평균은 %.1lf", avg / 5.0);
	*/
	return 0;
}

/*
 배열(array): 보통for 문 사용
 ex) int n[10];
 index는 0부터 시작 ([]안에 들어가는 것) 
 10은 변수의 개수(크기)
 없는 index에 값을 넣지 말 것(예시의 경우 n[10])
 []안에 지역변수(코드 내부)가 들어갈 수 없음. 젼역변수는 가능. #define을 이용하여 작성하면 됨(선처리변수)

	score[0] = 90;
	score[1] = 80;
	score[2] = 70;
	score[3] = 60;
	score[4] = 50; //대입문

 */