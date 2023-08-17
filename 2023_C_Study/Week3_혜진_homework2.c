#include <stdio.h>

/*
2. egg dad 가 출력되도록 코드를 짜세요
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