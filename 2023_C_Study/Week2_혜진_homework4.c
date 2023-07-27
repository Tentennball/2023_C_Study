#include <stdio.h>

/*
4. for문을 사용하여 다음과 같은 결과가 나오게 하세요.(빨간 점은 공백)
   단, 출력문은 printf("“), printf("*")만 
*/

//0 1 2 / 2 1 0 / 1 3 5

int main(void) {
	for (int i = 0; i <= 2; i++) {
		for (int j = 1; j <= 2-i; j++) {
			printf(" ");
		}
		for (int k = 1; k <= (2*i)+1 ; k++){
			printf("*");
		}	
		printf("\n");
	}
}