#include <stdio.h>

/*
1. ���� ������ ptr3 �迭�� ���� ptr�� ptr2�� ��ҿ� �����ؼ� ���
*/

int main(void) {
	char* ptr[3] = { "hi", "ss", "ff" };
	char* ptr2[3] = { "hiihi", "sss", "fff" };
	char** ptr3;
	ptr3 = &ptr[1];
	printf("%s\n", *ptr3);
	ptr3 = &ptr2[0];
	printf("%s\n", *ptr3);
}