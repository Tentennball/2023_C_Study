/*
3. a�� b�� ���� �Է¹����� a�� b�� ���� �ٲٴ� swap�Լ��� �����ϼ���.
*/
#include <stdio.h>
int swap(int * a,int * b) {
	int empty = *a;
	*a = *b;
	*b = empty;
	return *a, *b;
}
int main() {
	int a, b;
	printf("a�� b�Է�: ");
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("a: %d, b: %d", a, b);
}

