/*
1. word.txt�� ������ ù��°���� �ټ���° �ܾ word2.txt���ٰ� ������.(fseek�Ἥ)
*/

#include <stdio.h>
#include <string.h>
#define BUF_SIZE 10

int main() {
	char file[BUF_SIZE];
	FILE* fp;
	if (fopen_s(&fp, "word.txt", "rt") != 0) {
		puts("fail\n");
		return -1;
	}
	fseek(fp, 25, SEEK_SET);
	fread((void*)file, sizeof(char), 5, fp);
	file[5] = NULL;
	FILE* fp2;
	if (fopen_s(&fp2, "word2.txt", "wt") != 0) {
		puts("fail\n");
		return -1;
	}
	fputs(file, fp2);

    fclose(fp2);
	fclose(fp);
	return 0;
}