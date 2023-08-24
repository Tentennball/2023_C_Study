//1.다음 요구사항을 만족하는 프로그램을 만드세요.
//1) 뒤에서 부터 앞으로 추가하는 연결 리스트 설계 및 출력
//2) 생성/수정/삭제 구현

#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node* next;
}Node;

void print(Node* head);

int main() {
	int index, index2, new_data,num,i;
	Node* head = NULL;
	Node* prev = NULL;
	Node* cur = NULL;

	while (1) {
		printf("1,2,3,4,5 중 입력: ");
		scanf_s("%d", &num);
		switch (num) {
		case 1:
			while (1) {
				int input;
				printf("추가할 값: ");
				scanf_s("%d", &input);
				if (input <= 0) {
					printf("오류\n");
					break;
					
				}
				Node* newnode = (Node*)malloc(sizeof(Node));
				newnode->val = input;
				if (head == NULL) {
					head = newnode;
					head->next = NULL;
				}
				else {
					newnode->next = head;
					head = newnode;
				}
				printf("추가 완료\n");
			}
			print(head);
			break;
		case 2:
			printf("삭제할 노드 번호 index: ");
			scanf_s("%d", &index);
			if (index < 0) {
				printf("오류\n");
				break;
				
			}
		    cur = head;
			for (int j = 0; j < index && cur != NULL; j++) {
				cur = cur->next;
			}
			if (cur == NULL) {
				printf("오류\n");
				break;
			}
			cur = head;
			int cur_index = 0;
			while (cur != NULL) {
				if (index == 0) {
					cur = head;
					head = head->next;
					break;
				}
				prev = cur;
				cur = cur->next;
				cur_index++;

				if (cur_index == index) {
					prev->next = cur->next;
					break;
				}
			}
			printf("삭제 완료\n");
			print(head);
			break;
		case 3:
			printf("수정할 노드 index: ");
			scanf_s("%d", &index2);
			cur = head;
			if (index2 < 0) {
				printf("오류\n");
				break;
			}
				
			for (int p = 0; p < index2 && cur != NULL; p++) {
				cur = cur->next;
			}
			if (cur == NULL) {
				printf("오류\n");
				break;
			}
			cur = head;
			printf("수정할 값: ");
			scanf_s("%d", &new_data);

			int cur_index2 = 0;
			while (cur != NULL) {
				if (cur_index2 == index2)
					cur->val = new_data;
				cur = cur->next;
				cur_index2++;
			}
			printf("수정 완료\n");
			break;
		case 4:
			i = 0;
			cur= head;
			while (cur != NULL) {
				i++;
				printf("%d : %d \n", i, cur->val);
				cur = cur->next;
			}
			break;
		case 5:
			return 0;

		}
	}
}

void print(Node* head) {
	Node* cur = head;
	int i = 0;
	while (cur != NULL) {
		i++;
		printf("%d : %d \n", i, cur->val);
		cur = cur->next;
	}
}

// Node * cur = head; 메인 함수 젤 위에 먼저 초기화
// cur2, cur3 새롭게 선언하지 말고 cur = head 