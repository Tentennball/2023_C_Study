/*
1.아래의 문자열의 길이를 구하는 length 함수를 짜세요. (반복문 사용)
*/
#include <stdio.h>
int length(char arr[]) {
	int sum = 0;
	for (int i = 0; i < sizeof(arr) / sizeof(char); i++) {
		if (arr[i] != NULL) {
			sum += 1;
		}
		else {
			break;
		}
	}
	return sum;
}
int main() {
	char arr[] = "C Study";
	printf("%d", length(arr));
	return 0;
}