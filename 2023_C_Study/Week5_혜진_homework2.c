#include <stdio.h>

/*
2. person����ü ����� ����ϱ�
*/

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) {
	struct person Inform = { "������", "010-2723-6988", 20 };
	struct person* ptr = &Inform;

	printf("�̸�:%s, ��ȣ:%s, ����:%d\n", Inform.name, Inform.phoneNum, Inform.age);
	ptr->age = 10;
	printf("�ٲ� ���� : %d", ptr->age);
}