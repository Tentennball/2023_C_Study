#include <stdio.h>
/*
3. a, b를 입력 받으면 a와 b의 값을 서로 바꾸는 swap함수 구현
*/

int swap(num1, num2){  // num1 = 3, num2 = 4
	num1 = num2;   // num1 = a = 4
	return num1;   // 4 반환
}


int main(void) {
	int a, b;
	printf("a와 b 입력:");
	scanf_s("%d %d", &a, &b);    // a = 3  b = 4
	printf("a는 %d b는 %d", swap(a,b), swap(b,a));
}