/*
2. 피보나치 수열을 재귀함수를 통해 구현하세요.
*/
#include <stdio.h>
int fibo(int num) {
	if (num == 1 || num == 2) {
		return 1;
	}
	return fibo(num - 2) + fibo(num - 1);
}
int main() {
	int a;
	printf("몇 번째: ");
	scanf_s("%d", &a);
	printf("%d\n", fibo(a));
}
