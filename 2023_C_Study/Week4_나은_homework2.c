/*
2. ������ ���� 5x5 ���迭�� �����ϼ���.
*/
#include <stdio.h>
int main() {
	int i, j;
	int arr[5][5];
	for (i = 0; i < 5; i++) {
		if ((i % 2) != 0) {
			if (i == 1) {
				for (j = 0; j < 5; j++) {
					arr[i][j] = 10 * 1 - j;
				}
			}
			else {
				for (j = 0; j < 5; j++) {
					arr[i][j] = 10 * (i - (i - 2)) - j;
				}
			}
		}
		else {
			for (j = 0; j < 5; j++) {
				arr[i][j] = (10 * (i - (i / 2))) + (j + 1);

			}
		}
	}
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}


		
		
		

	