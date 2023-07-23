#include <stdio.h>

/*
1. while, swich/case문을 이용하여 다음과 같은 결과가 출력되게 하세요.
*/

int main(void) 
{
	int num;
	while (1) 
	{
		printf("물품리스트 : 1. 마라탕, 2. 국밥, 3. 치킨, 4. 닭발, 5. 햄버거, 6. 종료\n");
		scanf_s("%d", &num);

		switch (num) 
		{
		case 1:
			printf("마라탕은 15000원 입니다.\n");
			break;
		case 2:
			printf("국밥은 9000원 입니다.\n");
			break;
		case 3:
			printf("치킨은 20000원 입니다.\n");
			break;
		case 4:
			printf("닭발은 18000원 입니다.\n");
			break;
		case 5:
			printf("햄버거는 6000원 입니다.\n");
			break;
		}
		if (num == 6) {
			printf("종료\n");
			break;
		}
	}
	return 0;
}
