#include <stdio.h>
struct person {
	char name[100];
	char phonenum[200];
	int age;
};

int main() {
	struct person arr[3] = {
		{"���� ������", "112", 25},
		{"�ҹ�� ������", "119", 26},
		{"�����Ű�", "117", 27}
	};
	//struct person arr[3];

	//for (int i = 0; i < 3; i++) {
	//	printf("�̸� : ");
	//	scanf_s("%s", arr[i].name);
	//	printf("��ȣ : ");
	//	scanf_s("%s ", arr[i].phonenum);
	//	printf("���� : ");
	//	scanf_s("%d",&arr[i].age);
	//}
	
	for (int j = 0; j < 3; j++) {
		printf("%s %s %d\n", arr[j].name, arr[j].phonenum, arr[j].age);
	}
}