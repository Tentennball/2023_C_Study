#include <stdio.h>

/*
2. egg dad �� ��µǵ��� �ڵ带 ¥����
*/

int main(void) { 
	char arr[8] = { 'a', 'b', 'c', 'd', 'e', 'g', '\0' };
	char* ptr= &arr[4];
	printf("%c", *ptr);
	printf("%c%c", *(ptr + 1), *(ptr + 1));
	printf(" ");
	printf("%c", *(ptr - 1));
	printf("%c", *(ptr - 4));
	printf("%c", *(ptr - 1));
}