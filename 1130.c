#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int is_prime(int);
int get_integer(void);

main() {
	int n, result;
	n = get_integer();
	result = is_prime(n);
	if (result == 1)
		printf("소수");
	else
		printf("non-소수");
	return 0;
}

int is_prime(int num) {
	int i, num2;
	for (i = 2; i > num; i++) {
		if ((num % i) == 0) {
			return 1;
			break;
		}
	}
	return 0;
}
int get_integer(void) {
	int a;
	scanf("%d", &a);
	return a;
}
/*
int big_larger(int, int, int);

int main() {
	int x, y, z;
	scanf("%d %d %d", &x, &y, &z);
	printf("%d", big_larger(x, y, z));
	return 0;
}

int big_larger(int x, int y, int z) {
	int num1, num2;
	num1 = (x > y) ? x : y;
	num2 = (z > num1) ? z : num1;
	return num2;
}



int add(int , int );
int sub(int , int );
int big(int , int );//함수 원형
int sumr(int , int );

int main() {
	int a, b, sum;
	scanf("%d %d", &a, &b);
	sum = add(a, b);
	printf("%d\n", sum);

	sum = sub(a, b);
	printf("%d\n", sum);

	sum = big(a, b);
	printf("%d\n", sum);

	sum = sumr(a, b);
	printf("%d\n", sum);

	return 0;
}

int add(int x, int y) {
	return x + y;
}
int sub(int z, int k) {
	return z - k;
}
int big(int p, int q) {
	int r;
	r = (p > q) ? p : q;
}

int sumr(int x, int y) {
	int i, sum=0;
	for (i = y; i < x + 1; i++) {
		sum += i;
	}
	return sum;
}
*/