#include < stdio.h>
#define BUF_SIZE 10

/*
Q. word.txt의 파일의 첫번째줄의 다섯번째 단어를 word2.txt에다가 쓰세요.(fseek써서)
*/

int main(void) {
	char str[BUF_SIZE];

	FILE* fp;
	fopen_s(&fp,"word.txt", "rt");
	fseek(fp, 25, SEEK_SET);
	fread((void*)str, sizeof(char), 5, fp);   // 배열 str에 their 저장
	str[5] = NULL;
	
	FILE* fp2;
	fopen_s(&fp2, "word2.txt", "wt");
	fputs(str, fp2);

	fclose(fp);
	fclose(fp2);
	return 0;
}