/*
2.  å�� ������ person ����ü�� ����� ����غ�����.
*/
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

	for (int j = 0; j < 3; j++) {
		printf("%s %s %d\n", arr[j].name, arr[j].phonenum, arr[j].age);
	}
}