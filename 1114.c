#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
	int i, j;
	for (i = 1; i < 10; i++) {
		printf("====%d��====\n", i);
		for (j = 1; j < 10; j++)
			printf("%d * %d = %d\n", i, j, i*j);
	}
	/*
	int i, num1, num2, max, min; //���� ������ ��� ���� �־�� ��
	long sum = 1; //���丮���� �ʹ� ���ڰ� Ŀ�� long�� �����.
	printf("������ ����ұ��?");
	scanf("%d", &num1);
	for (i = 1; i <= num1; i++) { //�ʱⰪ=1�� �־� �������� �޸� ����� ���� �� ����
		sum = sum * i;
		printf("%d", sum);			   //		sum += i; // sum = sum + i ��� ����
	}//�� ���̸� �߰�ȣ ���� ����
	printf("%d", sum);
	*/
	return 0;
}

/*

���� ���� ���� ������ �� �־�� ��
for(�ʱⰪ; ���ǽ�; ������){
	������ �ڵ�
}

*/