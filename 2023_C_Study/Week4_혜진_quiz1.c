#include <stdio.h>

int main(void) {
	char* ptr[3] = { "hi", "ss", "ff" };
	char* ptr2[3] = { "hiihi", "sss", "fff" };
	char** ptr3[2] = {ptr, ptr2};
	printf("%s\n", ptr3[0][2]);
	printf("%s\n", ptr3[1][1]);
}