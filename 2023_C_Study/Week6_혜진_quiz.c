#include < stdio.h>
#define BUF_SIZE 10

/*
Q. word.txt�� ������ ù��°���� �ټ���° �ܾ word2.txt���ٰ� ������.(fseek�Ἥ)
*/

int main(void) {
	char str[BUF_SIZE];

	FILE* fp;
	fopen_s(&fp,"word.txt", "rt");
	fseek(fp, 25, SEEK_SET);
	fread((void*)str, sizeof(char), 5, fp);   // �迭 str�� their ����
	str[5] = NULL;
	
	FILE* fp2;
	fopen_s(&fp2, "word2.txt", "wt");
	fputs(str, fp2);

	fclose(fp);
	fclose(fp2);
	return 0;
}