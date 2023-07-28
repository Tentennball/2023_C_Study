/*
1. while, swich/case문을 이용하여 다음과 같은 결과가 출력되게 하세요.
*/
#include <stdio.h>
int main(void) {
	int num;
	while (1) {
		printf("물품리스트: 1. 짱구, 2. 유리, 3. 맹구, 4. 철수, 5. 훈이, 6. 종료\n");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("짱구는 1원입니다.\n");
			break;
		case 2:
			printf("유리는 2원입니다.\n");
			break;
		case 3:
			printf("맹구는 3원입니다.\n");
			break;
		case 4:
			printf("철수는 4원입니다.\n");
			break;
		case 5:
			printf("훈이는 5원입니다.\n");
			break;
		case 6:
			return 0;
		}
	}
}