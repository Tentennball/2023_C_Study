#include <stdio.h>
#include <string.h>

/*
1. ���ڸ� �޾Ƽ� strlen, strtok, strcpy ����ϱ�
*/
int main(void) {
	char str1[20];
	char str2[20];
	char* context;

	fgets(str1, sizeof(str1), stdin);
	printf("str1�� ���� : %u\n", strlen(str1)-1);

	strcpy_s(str2, sizeof(str2), str1);
	printf("str1 = %sstr2 = %s", str1, str2);

	char* token = strtok_s(str1, " ", &context); // ������ �������� ù ��° ��ū�� ã��
	while (token != NULL) {
		printf("Token: %s\n", token);
		token = strtok_s(NULL, " ", &context); // ���� ��ū�� ã��
	}
	return 0;
}