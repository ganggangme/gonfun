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
		printf("%d: ������ �־��ּ���.", i);
		scanf("%d", &score[i]);
	}

	for (i = 0; i < 5; i++)
		avg += score[i];
	printf("����� %.1lf", avg / 5.0);
	*/
	return 0;
}

/*
 �迭(array): ����for �� ���
 ex) int n[10];
 index�� 0���� ���� ([]�ȿ� ���� ��) 
 10�� ������ ����(ũ��)
 ���� index�� ���� ���� �� ��(������ ��� n[10])
 []�ȿ� ��������(�ڵ� ����)�� �� �� ����. ���������� ����. #define�� �̿��Ͽ� �ۼ��ϸ� ��(��ó������)

	score[0] = 90;
	score[1] = 80;
	score[2] = 70;
	score[3] = 60;
	score[4] = 50; //���Թ�

 */