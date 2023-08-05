#include <stdio.h>
int main() {
	int snail[5][5];
	int row=0, col=-1 ,k=1, sw = 1, end=4;
	while (end >= 0) {
		for (int i = 0; i < end+1; i++) {
			col += sw;
			snail[row][col] = k;
			k++;
		}
		for (int i = end; i>0; i--) {
			row += sw;
			snail[row][col] = k;
			k++;
		}
		end--;
		sw = -sw;
	}
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", snail[i][j]);
		}
		printf("\n");
	}
}

