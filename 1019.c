#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num1, num2, num3, max;
	max = 0;
	printf("첫번째 정수");
	scanf("%d",&num1);
	printf("두번째정수");
	scanf("%d", &num2);
	printf("세째정수");
	scanf("%d", &num3);
	if (num1 > num2)
		if (num1 > num3)
			max = num1;
		else
			if (num2 > num3)
				max = num2;
			else
				if (num2 > num3)
					max = num2;
				else
					max = num3;
	printf("%d", max);

	/*
	int couple, odd, num;
	printf("정수를 입력하시오:");
	scanf("%d", &num);
	num = (num % 2 == 0) ? 1 : 2;
	printf("%d", num);
	*/
	return 0;
}

/*
A가 참이면
오늘 if문 배운돠~~~~~ 
<참이면 1, 거짓이면 0이 return되어 온다>
x==y 같다
x!=y 같지 않다
x>=y x가 y보다 크거나 같다 (=이 오른쪽에 있다)
&& and 기호 x와 y 둘 다 모두 참일 때만 1 값 반환(return)
x && y AND연산 (교집합)
x || y OR연산 (합집합)
!x NOT연산 정수면 0 아니면 모두 참으로 인식
*/