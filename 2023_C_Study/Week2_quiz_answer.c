#include <stdio.h>

int fibo(int num);

int main(void) {
	int num;
	scanf_s("%d", &num);
	//Quiz 1 답안
	for (int i = 0; i < num; i++)
	{
		for (int j = num; j > i+1; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < 2*i+1; j++) {
			printf("*");
		}
		printf("\n");
	}
	for (int i = num-1; i > 0; i--)
	{
		for (int j = 0; j < num-i; j++)
		{
			printf(" ");
		}
		for (int j = 0; j < 2*i-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//Quiz 2 답안
	printf("%d",fibo(num));
}

//Quiz 2 답안
int fibo(int num) {
	if (num == 1) {;
		return 1;
	}
	if (num == 2) {
		return 1;
	}

	return fibo(num - 1) + fibo(num - 2);
}