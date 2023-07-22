/*
3. 다음 for문이 끝난 후  num의 값은 무엇일까요?
*/
#include <stdio.h>

//int main() {
//	for (int num = 0; num < 3; num++) {
//		printf("hi \n");
//	}
//	
//}

int main() {
	int num = 0;
	while (num < 3) {
		printf("hi ");
		num++;
		printf("%d\n", num);
	}
}