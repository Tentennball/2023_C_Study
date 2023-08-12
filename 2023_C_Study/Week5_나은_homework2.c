#include <stdio.h>
struct person {
	char name[100];
	char phonenum[200];
	int age;
};

int main() {
	struct person arr[3] = {
		{"경찰 아저씨", "112", 25},
		{"소방관 아저씨", "119", 26},
		{"학폭신고", "117", 27}
	};
	//struct person arr[3];

	//for (int i = 0; i < 3; i++) {
	//	printf("이름 : ");
	//	scanf_s("%s", arr[i].name);
	//	printf("번호 : ");
	//	scanf_s("%s ", arr[i].phonenum);
	//	printf("나이 : ");
	//	scanf_s("%d",&arr[i].age);
	//}
	
	for (int j = 0; j < 3; j++) {
		printf("%s %s %d\n", arr[j].name, arr[j].phonenum, arr[j].age);
	}
}