/*
1. while, swich/case���� �̿��Ͽ� ������ ���� ����� ��µǰ� �ϼ���.
*/
#include <stdio.h>
int main(void) {
	int num;
	while (1) {
		printf("��ǰ����Ʈ: 1. ¯��, 2. ����, 3. �ͱ�, 4. ö��, 5. ����, 6. ����\n");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			printf("¯���� 1���Դϴ�.\n");
			break;
		case 2:
			printf("������ 2���Դϴ�.\n");
			break;
		case 3:
			printf("�ͱ��� 3���Դϴ�.\n");
			break;
		case 4:
			printf("ö���� 4���Դϴ�.\n");
			break;
		case 5:
			printf("���̴� 5���Դϴ�.\n");
			break;
		case 6:
			return 0;
		}
	}
}