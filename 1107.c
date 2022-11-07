#include <stdio.h>

int main() {
	int i = 0; //초기값
	while (i < 5) //조건식
	{
		printf("환영합니다.\n");
		i++; //증감식
	}
	printf("반복이 종료되었습니다.");
	int j = 1;
	int sum = 0;
	while (j <= 10)
	{
		sum = sum + j;
		j++;
	}
	printf("합계=%d", sum);
	int grade;
	scanf_s("%d", &grade);
	switch (grade / 10)
	{
	case 10:
	case 9:
		printf("학점 A");
		break;
	case 8:
		printf("학점 B");
		break;
	case 7:
		printf("학점 C");
		break;
	case 6:
		printf("학점 D");
		break;
	case 5:
		printf("학점 F");
		break;
	}
	return 0;
}


/*
<반복문에 필요한 것>
1. 초기값
2. 조건식
3. 증감식



*/