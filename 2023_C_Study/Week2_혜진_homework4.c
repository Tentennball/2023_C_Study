#include <stdio.h>

/*
4. for���� ����Ͽ� ������ ���� ����� ������ �ϼ���.(���� ���� ����)
   ��, ��¹��� printf("��), printf("*")�� 
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