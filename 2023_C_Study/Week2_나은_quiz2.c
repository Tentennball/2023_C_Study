/*
2. �Ǻ���ġ ������ ����Լ��� ���� �����ϼ���.
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
	printf("�� ��°: ");
	scanf_s("%d", &a);
	printf("%d\n", fibo(a));
}
