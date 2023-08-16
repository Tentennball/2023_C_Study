/*
0- word.txt파일을 읽는다.
1- word.txt의 단어가 몇개인지 카운트하는 기능
2- 알파벳 a~z중 아무거나 하나를 입력하면 해당 알파벳으로 시작하는 문자가 몇개인지 출력하는 기능
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char file[200];
	FILE* fp = fopen("word.txt", "rt");
	if (fp == NULL) {
		puts("파일 오픈 실패\n");
		return -1;
	}
	int count_word = 0;
	while (fgets(file, sizeof(file), fp) != NULL) {
		char* ptr = strtok(file, " ");
		while (ptr != NULL) {
			count_word++;
			ptr = strtok(NULL, " ");
		}
		count_word--;
	}
	printf("파일 내 단어 수 : %d", count_word);
	fclose(fp);
	return 0;
}


// 28171




