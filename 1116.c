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
		printf("������ �����Ͽ� ���ÿ�:");
		scanf("%d", &num);
		i++;
		if (num > ans)
			printf("������ ������ �����ϴ�.");
		else if (num < ans)
			printf("������ ������ �����ϴ�.");
		else{
			printf("�����մϴ�. �õ�Ƚ�� %d", i);
			break;
		}
	}

	double capacity, battery, charge;
	capacity = 3000.0;
	printf("���� �����ִ� ������: %lf\n", capacity);
	for (;;) {
		printf("����/���:");
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
		printf("���� �����ִ� ������: %lf\n", battery);
	}// while���� ��� while(battery > capacity*0.10){... ���� ¥�� ��
	printf("���, ���� �ʿ�");


	int i;
	for (i = 0; i < 10; i++) {
		if (i % 3 == 0)
			continue;
		printf("%d", i);
	}
	

	int i=0, score, sum=0;
	double avg;
	for (;;) {
		printf("������ �Է��ϼ���:");
		scanf("%d", &score);
		if (score < 0)
			break;
		sum += score;
		i++;

	}
	avg = (double)sum / i;
	printf("�����? %.1lf", avg);


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