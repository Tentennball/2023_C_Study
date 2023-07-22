#include <stdio.h>
int main() {
	int num;
	printf("ют╥б: ");
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++) {
		for (int g = 0; g < (num) - i; g++) {
			printf(" ");
		}
		for (int s = 0; s < 2 * (i+1) - 1; s++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num; i++) {
		for (int g = 0; g < i+; g++) {
			printf(" ");
		}
		for (int s = 0; s < (2*num)-2*i-3; s++) {
			printf("*");
		}
		printf("\n");
	}

}


