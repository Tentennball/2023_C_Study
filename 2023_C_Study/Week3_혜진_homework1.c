#include <stdio.h>

/*
1. 문자열의 길이를 구하는 length 함수를 짜세요.(반복문 사용)
*/

int length(char arr[]) {
	int len = 0;
	while (arr[len] != '\0') {
		len++;
	}
	return len;
}

int main(void) {
	char arr[] = "C study";
	printf("%d\n", sizeof(arr));
	printf("%d", length(arr));
	return 0;
}