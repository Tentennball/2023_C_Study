/*
2. �Ʒ��� ���� ��µǴ� add�Լ��� �����ϼ���.
*/
#include <stdio.h>
int add(int num1, int num2) {
	return num1 + num2;
}
int main(void) {
	int a, b;
	printf("���� �� 2�� �Է�: \n");
	scanf_s("%d %d", &a, &b);
	int result = add(a, b);
	printf("%d", result);
}