/*
4. for���� ����Ͽ� ������ ���� ����� ������ �ϼ���.
   (���� ���� ����)
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