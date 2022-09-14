#include<stdio.h>

int main()
{
	printf("%d는 정수입니다.\n", 10*10);
	printf("%f는 실수입니다.\n", 10.5);
	printf("%.1f는 실수입니다.\n", 10.5);
	printf("%c는 문자입니다.\n", 'j'); // %c(1byte(는 문자열로 인식(1byte), 한글은 문자열로 인식(2byte)
	printf("%d는 문자입니다.\n", 'A'); //%d(정수값)으로 문자를 받으면 아스키 코드로 변환되어서 나옴 (%c에 숫자 넣으면 아스키 코드(0~127)로 변환되어서 문자로 나옴)
	printf("%s는 문자열입니다.\n", "juk");
	printf("%d %d %.1f %c %s\n", 10, 20, 30.7, 'b', "hey");
	printf("____________________________________________________\n");
	printf("\a");
	printf("ABC\n");
	printf("**\tPROGRAMING\t**\n");
	return 0;
}
//