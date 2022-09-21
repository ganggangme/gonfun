#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  
#define PI 3.141592

int main()
{
	float radius = 10.0f;
	double area;

	area = 4.0/3.0 * PI * radius * radius * radius;
	printf("원의 부피: %f\n", area);

	int num1, num2, sum;
	num1 = 100;
	num2 = 200;
	sum = num1 + num2;
	printf("두 수의 합: %d\n", sum);

	int num3 = 100;
	int num4 = 200;
	printf("%d + %d = %d\n", num3, num4, num3 + num4);
	printf("%d - %d = %d\n", num3, num4, num3 - num4);
	printf("%d * %d = %d\n", num3, num4, num3 * num4);
	printf("%d / %d = %d\n", num3, num4, num3 / num4);

	float x = 155.423, y = 20.787, z = 50.34;
	printf("x = % .3f, y = %.3f, z = %.3f\n", x, y, z);
	printf("x + y + z = %.3f\n", x + y + z);
	printf("x - y - z = %.3f\n", x - y - z);
	printf("x / y / z = %.3f\n", x / y / z);
	printf("(x * y)/ z = %.3f\n", (x * y)/ z);

	int num5 = 10; float num6 = 15.7f;
	printf("%d\n%.1f\n", num5, num6);

	//chapter 6    S T A R T!!!!!
	
	int age;
	char blood[3], name[20];

	printf("나이를 입력하시오:");
	scanf("%d", &age);
	printf("혈액형을 입력하시오:"); //enter가 문자열로 취급됨 
	scanf(" %s", &blood, 3); //바로 넘어가는 거 방지하기 위해 스페이스 바를 하나 눌러야 한다
	printf("이름을 입력하시오:");
	scanf(" %s", &name, 20);
	printf("% d살이고 %s형, 이름은 %s시군요.이시군요.\n", age, blood, name);

	return 0;
}

/*
기호 상수
#define PI 3.141592 (문서 가장 위에 명시) 보통 대문자로 표시
연산할 때 실수를 입력하면 상수로 입력해야 함. 
*/