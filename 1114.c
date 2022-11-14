#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;
	for (i = 1; i < 10; i++) {
		printf("====%d단====\n", i);
		for (j = 1; j < 10; j++)
			printf("%d * %d = %d\n", i, j, i*j);
	}
	/*
	int i, num1, num2, max, min; //변수 선언은 모두 위에 있어야 함
	long sum = 1; //팩토리얼은 너무 숫자가 커서 long이 권장됨.
	printf("어디까지 계산할까요?");
	scanf("%d", &num1);
	for (i = 1; i <= num1; i++) { //초기값=1로 둬야 쓸데없는 메모리 사용을 막을 수 있음
		sum = sum * i;
		printf("%d", sum);			   //		sum += i; // sum = sum + i 라는 뜻임
	}//한 줄이면 중괄호 생략 가능
	printf("%d", sum);
	*/
	return 0;
}

/*

먼저 위에 변수 선언을 해 주어야 함
for(초기값; 조건식; 증감식){
	수행할 코드
}

*/