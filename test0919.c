#include <stdio.h>

int main()
{
	float l, h, area;
	l = 2;
	h = 2.3;
	area = l * l;
	printf("직사각형의 면적은? %f", area); 
	/*
	float radius = 10.0;
	float area;

	area = 3.141592 * radius * radius;
	printf("원의 면적: %f\n", area);
	
	int number;
	number = 10;
	printf("변수의 값은 %d입니다.\n", number);

	number = 20;
	printf("변수의 값은 %d입니다.\n", number);
	*/
	return 0;
}

/*
<초기화와 대입화> 
초기화: 
int value = 0; (만듦과 동시에 값을 주는 것)

대입화:
int value
value = 0;

<형식 지정자>
%d %f %c %s
*/