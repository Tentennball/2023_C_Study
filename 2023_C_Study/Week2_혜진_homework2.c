#include <stdio.h>

/*
2. �Ʒ��� ���� ��µǴ� add�Լ��� �����ϼ���.
*/

int Add(int num1, int num2) {
	return num1 + num2;
}

int main(void) {
	int num1, num2;
	printf("���� �� 2�� �Է�:\n");
	scanf_s("%d %d", &num1, &num2);
	int result = Add(num1, num2);
	printf("%d",result);
}