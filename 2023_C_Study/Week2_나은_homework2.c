/*
2. 아래와 같이 출력되는 add함수를 구현하세요.
*/
#include <stdio.h>
int add(int num1, int num2) {
	return num1 + num2;
}
int main(void) {
	int a, b;
	printf("더할 수 2개 입력: \n");
	scanf_s("%d %d", &a, &b);
	int result = add(a, b);
	printf("%d", result);
}