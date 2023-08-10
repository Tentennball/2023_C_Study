
/*
1. 문자를 받아서 strlen, strtok, strcpy를 사용해보세요.
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void Remove(char str1[]);

int main() {
	char str1[20];
	printf("str1 입력: ");
	fgets(str1, sizeof(str1), stdin);
	Remove(str1);
	printf("길이: %d\n", strlen(str1));

	char str2[20];
	strcpy(str2, str1);
	printf("str2 : %s\n", str2);

	char* ptr = strtok(str1, " ");
	while (ptr != NULL) {
		printf("%s\n", ptr);
		ptr = strtok(NULL, " ");
	}
}

void Remove(char str1[]) {
	int len = strlen(str1);
	str1[len - 1] = 0;
}

