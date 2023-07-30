/*
3. a와 b의 값을 입력받으면 a와 b의 값을 바꾸는 swap함수를 구현하세요.
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
	printf("a와 b입력: ");
	scanf_s("%d %d", &a, &b);
	swap(&a, &b);
	printf("a: %d, b: %d", a, b);
}

