#include <stdio.h>

/*
1.���� �Ƕ�̵� �����
*/

int main(void) {
	int num;
	printf("�Է�:\n");
	scanf_s("%d", &num);

	for (int i = 0; i < num; i++) {
		for (int k = 1; k < num - i; k++) {
			printf(" ");
		}
		for (int j = 1; j <= (2 * i) + 1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = 0; i < num - 1; i++) {  
		for (int k = 1; k <= i + 1; k++) {
			printf(" ");                
		}                      
		for (int j = 1; j <= 2*(num-1)-(1+(2*i)); j++) {
			printf("*");
		}
		printf("\n");
	}
}