#include <stdio.h>

/*
1. ���ڿ��� ���̸� ���ϴ� length �Լ��� ¥����.(�ݺ��� ���)
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