/*
2. �Ʒ��� ����� �����ϵ��� �ڵ带 ¥����.
*/
#include <stdio.h>
int main() {
	char arr[8] = { 'a','b','c','d','e','g','\0' };
	char* ptr;
	ptr = arr;
	printf("%c", *(ptr+4));
	printf("%c", *(ptr+5));
	printf("%c ", *(ptr + 5));

	printf("%c", *(ptr+3));
	printf("%c", *(ptr+0));
	printf("%c", *(ptr + 3));
}
