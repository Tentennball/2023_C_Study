/*
0- word.txt������ �д´�.
1- word.txt�� �ܾ ����� ī��Ʈ�ϴ� ���
2- ���ĺ� a~z�� �ƹ��ų� �ϳ��� �Է��ϸ� �ش� ���ĺ����� �����ϴ� ���ڰ� ����� ����ϴ� ���
*/

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
	char file[200];
	FILE* fp = fopen("word.txt", "rt");
	if (fp == NULL) {
		puts("���� ���� ����\n");
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
	printf("���� �� �ܾ� �� : %d", count_word);
	fclose(fp);
	return 0;
}


// 28171




