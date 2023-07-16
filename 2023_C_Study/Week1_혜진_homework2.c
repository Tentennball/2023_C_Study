#include <stdio.h>

/*
2. ASCII코드의 알파벳 소문자를 정수로 받고, 대문자로 출력
*/
char a = 'a', b = 'b', c = 'c', d = 'd', e = 'e';
int main(void) {
	printf("%c\n", a - 32);
	printf("%c\n", b - 32);
	printf("%c\n", c - 32);
	printf("%c\n", d - 32);
	printf("%c\n", e - 32);
}