#include <stdio.h>
#include <string.h>
#define BUF_SIZE 130
/*
Q. ������ ������Ű�� ���α׷� ����

0- word.txt������ �д´�.

1- word.txt�� �ܾ ����� ī��Ʈ�ϴ� ���

2- ���ĺ� a~z�� �ƹ��ų� �ϳ��� �Է��ϸ� �ش� ���ĺ����� �����ϴ� ���ڰ� ����� ����ϴ� ���
*/

int main(void) {
	int sum = 0;
	char str[BUF_SIZE];  // BUF_SIZE = 130
	char* context;

	FILE* fp;  // ���� �б�
	if (fopen_s(&fp, "word.txt", "rt") != 0) {
		printf("������ ���� ����� �Ф�");
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
	printf("�ܾ� ���� : %d\n", sum);
	fclose(fp);
}