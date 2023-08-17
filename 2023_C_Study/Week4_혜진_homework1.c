#include <stdio.h>

/*
1. 이중 포인터 ptr3 배열을 통해 ptr과 ptr2의 요소에 접근해서 출력
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