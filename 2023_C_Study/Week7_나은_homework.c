#include <stdio.h>
#include <stdlib.h>

typedef struct node {
	int val;
	struct node* next;
}Node;

Node* head = NULL;
Node* tail = NULL;

void print(Node* head);

void print(Node* head) {
Node* cur = head;
int i = 0;
while (cur != NULL) {
	i++;
	printf("%d : %d \n", i, cur->val);
	cur = cur->next;
}
}

int main() {
	int index, index2, new_data,num,i;
	printf("1,2,3,4,5 중 입력: ");
	scanf_s("%d", &num);
	switch (num) {
	case 1:
		while (1) {
			int input;
			printf("추가할 값: ");
			scanf_s("%d", &input);
			if (input <= 0) break;
			Node* newnode = (Node*)malloc(sizeof(Node));
			newnode->val = input;
			if (head == NULL) {
				tail = newnode;
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
	case 2:
		printf("삭제할 노드 번호 index: ");
		scanf_s("%d", &index);
		if (index < 0) return NULL;
		Node* prev = NULL;
		Node* cur = head;
		for (int j = 0; j < index && cur != NULL; j++) {
	         cur = cur->next;
         }
        if (cur == NULL) return NULL;
		cur = head;
		int cur_index = 0;
		while (cur != NULL) {
			if (index == 0) {
				Node* ptr = head;
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
	case 3:
		printf("수정할 노드 index: ");
		scanf_s("%d", &index2);
		Node* cur2 = head;
		if (index2 < 0)
			return NULL;
		for (int p = 0; p < index2 && cur2 != NULL; p++) {
			cur2 = cur2->next;
		}
		if (cur2 == NULL) return NULL;
		cur2 = head;
		printf("수정할 값: ");
		scanf_s("%d", &new_data);

		int cur_index2 = 0;
		while (cur2 != NULL) {
			if (cur_index2 == index2)
				cur2->val = new_data;
			cur2 = cur2->next;
			cur_index2++;
		}
		printf("수정 완료\n");
	case 4:
		i = 0;
        Node* cur3 = head;
		while (cur3 != NULL) {
			i++;
			printf("%d : %d \n", i, cur3->val);
			cur3 = cur3->next;
		}
	case 5:
		break;

	}
}



