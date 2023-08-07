/*
1. 이중 포인터 ptr3 배열을 통해 ptr과 ptr2의 요소에 접근해서 출력해보세요.
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