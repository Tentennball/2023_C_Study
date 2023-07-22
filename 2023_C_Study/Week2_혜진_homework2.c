#include <stdio.h>

/*
2. 아래와 같이 출력되는 add함수를 구현하세요.
*/

int Add(int num1, int num2) {
	return num1 + num2;
}

int main(void) {
	int num1, num2;
	printf("더할 수 2개 입력:\n");
	scanf_s("%d %d", &num1, &num2);
	int result = Add(num1, num2);
	printf("%d",result);
}