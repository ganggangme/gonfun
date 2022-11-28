#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Print() {//자료형이 없을 경우 void를 씀
	printf("-------------------------\n");
	printf("-------------------------\n");
	printf("-------------------------\n");
}
int main() {

	Print();

	/*
	int vote[11] = { 0 }, num, i;
	while (1) {
		printf("몇 번 연예인을 선택하시겠습니까?");
		scanf("%d", &num);
		if (num == -1)
			break;
		vote[num]++;

	}
	for (i = 1; i < 11; i++) {
		printf("%3d %3d", i, vote[i]); //3d는 3칸으로 찍어 달라는 뜻
	}

	int i, pick, num[] = { 1, 3, 3, 5, 5, 1, 2, 2, 3, 4 };
	printf("탐색할 값을 입력하시오");
	scanf("%d", &pick);
	for (i = 0; i < 10; i++) {
		if (num[i] == pick) {
			printf("탐색 성공 인덱스 %d", i);

		}
	}
	*/
	return 0;
}