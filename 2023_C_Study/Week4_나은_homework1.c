/*
1. ���� ������ ptr3 �迭�� ���� ptr�� ptr2�� ��ҿ� �����ؼ� ����غ�����.
*/
#include <stdio.h>
int main() {
	char* ptr[3] = { "hi", "ss", "ff"};
	char* ptr2[3] = { "hihi", "sss", "fff" };
	char** ptr3= ptr;
	printf("%s\n", *(ptr+1));
	ptr3 = ptr2;
	printf("%s\n", *(ptr3 + 1));
}