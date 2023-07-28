/*
2. 아래의 출력을 만족하도록 코드를 짜세요.
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
