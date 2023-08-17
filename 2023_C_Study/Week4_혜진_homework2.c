#include <stdio.h>

/*
2. ㄹ모양 5x5 배열 구현하기
*/

int main(void) {
	int arr[5][5];
	for (int i = 0; i < 3; i++)
		for (int j = 0; j < 5; j++)
			arr[2 * i][j] = (10 * i) + (j+1);
	for (int i = 0; i < 2; i++)
		for (int j = 0; j < 5; j++)
			arr[(2 * i) + 1][j] = 10 * (i + 1) - j;

	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}