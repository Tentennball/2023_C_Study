#include <stdio.h>
int main() {
	char* ptr[3] = { "hi", "ss", "ff" };
	char* ptr2[3] = { "hiihi", "sss", "fff" };
	char** ptr3[] = { ptr, ptr2 };
	printf("%s\n", ptr3[0][1]);
	printf("%s\n", ptr3[1][1]);
}



