#include <stdio.h>

/*
1. while, swich/case���� �̿��Ͽ� ������ ���� ����� ��µǰ� �ϼ���.
*/

int main(void) 
{
	int num;
	while (1) 
	{
		printf("��ǰ����Ʈ : 1. ������, 2. ����, 3. ġŲ, 4. �߹�, 5. �ܹ���, 6. ����\n");
		scanf_s("%d", &num);

		switch (num) 
		{
		case 1:
			printf("�������� 15000�� �Դϴ�.\n");
			break;
		case 2:
			printf("������ 9000�� �Դϴ�.\n");
			break;
		case 3:
			printf("ġŲ�� 20000�� �Դϴ�.\n");
			break;
		case 4:
			printf("�߹��� 18000�� �Դϴ�.\n");
			break;
		case 5:
			printf("�ܹ��Ŵ� 6000�� �Դϴ�.\n");
			break;
		}
		if (num == 6) {
			printf("����\n");
			break;
		}
	}
	return 0;
}
