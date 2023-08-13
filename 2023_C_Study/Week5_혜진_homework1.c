#include <stdio.h>
#include <string.h>

/*
1. 문자를 받아서 strlen, strtok, strcpy 사용하기
*/
int main(void) {
	char str1[20];
	char str2[20];
	char* context;

	fgets(str1, sizeof(str1), stdin);
	printf("str1의 길이 : %u\n", strlen(str1)-1);

	strcpy_s(str2, sizeof(str2), str1);
	printf("str1 = %sstr2 = %s", str1, str2);

	char* token = strtok_s(str1, " ", &context); // 공백을 기준으로 첫 번째 토큰을 찾음
	while (token != NULL) {
		printf("Token: %s\n", token);
		token = strtok_s(NULL, " ", &context); // 다음 토큰을 찾음
	}
	return 0;
}