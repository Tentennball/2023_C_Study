/*
1.�Ʒ��� ���ڿ��� ���̸� ���ϴ� length �Լ��� ¥����. (�ݺ��� ���)
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