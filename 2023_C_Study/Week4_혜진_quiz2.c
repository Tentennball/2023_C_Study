#include <stdio.h>

/*
  1  2  3  4  5     
 16 17 18 19  6      
 15 24 25 26  7      
 14 23 22 21  8      
 13 12 11 10  9
*/

int main(void) {
	int arr[5][5];
	int k = 1, start = 0, end = 4, num1 = 0, num2 = 4, one = 1, temp1, temp2;

	while (k<25)
	{	
		for (int j = 0; j<2; j++)
		{
			for (int i = num1; i != num2 + one; i += one)  
			{
				arr[start][i] = k;
				k = k + 1;
			}
			num1 = num1 + 1;         
			if (k < 26) {
				for (int i = num1; i != num2 + one; i += one)
				{
					arr[i][end] = k;
					k = k + 1;
				}
			}
			num2 = num2 - 1;  
			temp1 = start;
			start = end;
			end = temp1;
			one = -one;
			temp2 = num1;
			num1 = num2;
			num2 = temp2;
		}
		start = start + 1;
		end = end - 1;
		num1 = 1;
		num2 = 3;
	}
	arr[2][2] = 25;
	for (int i = 0; i < 5; i++) {
		for (int j = 0; j < 5; j++) {
			printf("%d\t", arr[i][j]);
		}
		printf("\n");
	}
}