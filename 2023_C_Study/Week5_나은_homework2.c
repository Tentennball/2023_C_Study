/*
2.  책에 나오는 person 구조체를 만들고 사용해보세요.
*/
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

	for (int j = 0; j < 3; j++) {
		printf("%s %s %d\n", arr[j].name, arr[j].phonenum, arr[j].age);
	}
}