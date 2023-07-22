/*
4. for문을 사용하여 다음과 같은 결과가 나오게 하세요.
   (빨간 점은 공백)
*/
#include <stdio.h>
int main() {
	for (int i = 0; i < 3; i++) {
		int star = 2*i + 1 ;
		int gap = 2 - i;
		for (int g = 0; g < gap; g++) {
			printf(" ");
		}
		for (int s = 0; s < star; s++) {
			printf("*");
		}
		printf("\n");
	}
}