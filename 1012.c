#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> //수학 관련 헤더파일
#define PE 3.3

int main()
{
	int x, y, z, k;
	x = 10;
	y = ++x; //++x은 라인이 시작될 때 
	z = x++;//x++은 라인이 끝날 때
	k = x++ + ++x;
	printf("x=%d, y=%d, z=%d, k=%d", x, y, z, k);

	/*
	int money, price, ans1, ans2, ans3, ans4, ans5, ans6, a5000ans, a1000ans, a500ans, a100ans, a50ans, a10ans;
	printf("고객으로부터 받은 돈:");
	scanf("%d", &money);
	printf("물건값: ");
	scanf("%d", &price);
	ans1 = money - price;
	a5000ans = ans1 / 5000;
	ans2 = ans1 % 5000;
	a1000ans = ans2 / 1000;
	ans3 = ans2 % 1000;
	a500ans = ans3 / 500;
	ans4 = ans3 % 500;
	a100ans = ans4 / 100;
	ans5 = ans4 % 100;
	a50ans = ans5 / 50;
	ans6 = ans5 % 50;
	a10ans = ans6 % 10;
	printf("오천원: %d", ans5000);
	printf("천원:%d" ans1000);//귀찮아.........쓰기 for문 쓰면 안되나 


	
	(*)
	iny s, sy, reslullt;
	print("두 개으 정수를 입력하시오");
	print("% d % dd".l: == =
}
	double m, v, E;
	printf("질량:");
	scanf("%lf", &m);
	printf("속도:");
	scanf("%lf", &v);
	E = 0.5 * m * pow(v,2); // pow(x,y) 밑이 x이고 지수가 y인 함수. 쓰기 위해서는 include <math.h>를 붙여야 한다. 
	printf("운동에너지: %lf", E);

	double num, ans;
	printf("평을 입력하세요:");
	scanf("%lf", &num);
	ans = PE*num;
	printf("%lf평방미터입니다.", ans);


	double num1, num2, num3, ans;
	printf("상자의 가로 세로 높이를 한번에 입력하시오:\n");
	scanf("%lf %lf %lf", &num1, &num2, & num3);
	ans = num1 * num2 * num3;
	printf("상자의 부피는 %lf입니다.", ans);
	*/
	return 0;
}


/*
% 모듈 계산
*/