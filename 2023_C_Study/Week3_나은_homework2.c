/*
2.�Ʒ��� ����� �����ϵ��� �ڵ带 ¥����.
*/#include <stdio.h>
int main() {
	char arr[8] = { 'a','b','c','d','e','g','\0' };
	char* ptr;
	ptr = arr;
	printf("%c", arr[4]);
	printf("%c", arr[5]);
	printf("%c ", arr[5]);

	printf("%c", arr[3]);
	printf("%c", arr[0]);
	printf("%c", arr[3]);
}