#include <stdio.h>
/*
3. a, b�� �Է� ������ a�� b�� ���� ���� �ٲٴ� swap�Լ� ����
*/

int swap(num1, num2){  // num1 = 3, num2 = 4
	num1 = num2;   // num1 = a = 4
	return num1;   // 4 ��ȯ
}


int main(void) {
	int a, b;
	printf("a�� b �Է�:");
	scanf_s("%d %d", &a, &b);    // a = 3  b = 4
	printf("a�� %d b�� %d", swap(a,b), swap(b,a));
}