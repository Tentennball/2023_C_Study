#include <stdio.h>
#include <string.h>
#define BUF_SIZE 130
/*
Q. 다음을 만족시키는 프로그램 구현

0- word.txt파일을 읽는다.

1- word.txt의 단어가 몇개인지 카운트하는 기능

2- 알파벳 a~z중 아무거나 하나를 입력하면 해당 알파벳으로 시작하는 문자가 몇개인지 출력하는 기능
*/

int main(void) {
	int sum = 0;
	char str[BUF_SIZE];  // BUF_SIZE = 130
	char* context;

	FILE* fp;  // 파일 읽기
	if (fopen_s(&fp, "word.txt", "rt") != 0) {
		printf("파일을 열수 없어요 ㅠㅠ");
		return -1;
	}

	while (fgets(str, sizeof(str), fp) != NULL) {
		char* token = strtok_s(str, " ", &context);
		while (token != NULL) {
			sum++;
			token = strtok_s(NULL, " ", &context);
		}
		sum--;
	}
	printf("단어 개수 : %d\n", sum);
	fclose(fp);
}