#include <stdio.h>

/*
2. person구조체 만들고 사용하기
*/

struct person {
	char name[20];
	char phoneNum[20];
	int age;
};

int main(void) {
	struct person Inform = { "신혜진", "010-2723-6988", 20 };
	struct person* ptr = &Inform;

	printf("이름:%s, 번호:%s, 나이:%d\n", Inform.name, Inform.phoneNum, Inform.age);
	ptr->age = 10;
	printf("바뀐 나이 : %d", ptr->age);
}