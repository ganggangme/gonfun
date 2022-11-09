#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <limits.h> //INT_MAX를 넣기 위해 (시험에 안 나옴, EOF도 안 나옴)
int main() {
	int i = 1, j = 1;
	while (i < 10)
	{
		printf("==== %d 단 ==== \n", i);
		while (j < 10)
		{
			printf("%d*%d=%d\n", i, j, i * j);
			j++;
		}
		i++; //안 넣으면 0점
		j = 1; //안 넣으면 5점(10점 만점)
	}

	
	/*
	int i = 1;
	int n;
	scanf("%d", &n);
	do
	{
		printf("Hello%d", n);

		n--;
	} while (n > 0);

	int sum=0, i = 1;
	do//do를 while 자리에 붙인다
	{
		if (i % 3 == 0)
			printf("%d ", i);
		i++;
	}	while (i <= 100); //조건판단(세미콜론 꼭 필요)
	// do while문 특징: 최소 1번은 코드가 돈다
	


	int i = 1;
	int n;
	scanf("%d", &n);
	while (n>0)
	{
		printf("%d", n);

		n--;
	}
	printf("발사");


	int i = 1;
	int n;
	scanf("%d",&n);
	while (i <= 9)
	{
		printf("%d*%d = %d",n, i, n * i);
		i++;
	}


	int num = 1;
	int sum = 0;
	while (num != 0)
	{
		scanf("%d", &num);
		sum = sum + num;
	}
	printf("합계=%d", sum);

	int num, i, min, max;
	int sum = 0;
	scanf("%d", &i); //초기값
	scanf("%d", &num); //최종값
	(i < num) ? (min = i, max = num) : (min = num, max = i); //최대값 최솟값을 비교해야함

	while (min <= max)
	{
		sum = sum + min;
		min++;
	}
	printf("%d", sum);
	
	*/
	return 0;
}

/*
오늘의 충격적 발견: 키보드가 수정 모드일 때는 Insert 키를 눌러서 그런 것이다.
*/