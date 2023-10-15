#include <stdio.h>
#include <stdlib.h>
/*
Q. 다음 조건을 만족시키는 프로그램 구현
- 뒤에서부터 앞으로 추가하는 연결리스트 설계 및 출력
- 생성/수정/삭제 구현
- ex) 1, 2, 3, 4, 5순으로 데이터를 입력해서 노드를 추가하면 5→4→3→2→1위와 같은 방식으로 연결리스트 구성
*/

typedef struct node {
    int val;
    struct node* next;
} Node;

int main(void) {
    while (1) {
        int num, input, index, data1, data2;
        Node* head = NULL;
        Node* cur = NULL;
        Node* cur_prev = NULL;
        printf("1. 추가 2. 삭제 3. 수정 4. 출력 5. 종료\n입력 : ");
        scanf_s("%d", &num);

        switch (num) {
        case 1:
            printf("데이터를 입력하세요 : ");
            scanf_s("%d", &input);

            if (input <= 0)
                break;

            Node* newnode = (Node*)malloc(sizeof(Node));

            newnode->val = input;
            newnode->next = NULL;

            if (head == NULL)    // head가 NULL이면 현재 연결리스트에 노드가 없다는 뜻
                head = newnode;
            else{
                newnode->next = head;
                head = newnode;
            }
            break;        
        case 2:
            printf("삭제할 데이터를 입력하세요 : ");
            scanf_s("%d", &index);

            if (index <= 0)
                break; 
            if (head == NULL) {
                printf("오류입니다.\n");
                break;
            }
            int search = 0;  

            cur = head;  
            while (cur != NULL){
                if (cur->val == index){
                    search = 1; 
                    break;  
                }
                cur_prev = cur;  
                cur = cur->next;  
            }

            if (search == 1){
                printf("%d 삭제 완료.\n", index);
                if (cur == head) 
                    head = cur->next; 
                else 
                    cur_prev->next = cur->next; 

                free(cur);  
            }
            else{
                printf("%d를 찾을 수 없습니다.\n", index);
            }
            break;
        case 3:   // 5 4 3 2 1
            printf("수정할 원래 데이터를 입력하세요 : \n");
            scanf_s("%d", &data1);
            printf("수정할 데이터의 값을 입력하세요 : \n");
            scanf_s("%d", &data2);

            if (data2 <= 0)
                break;

            int search2 = 0;
            cur = head;
            while (cur != NULL) {
                if (cur->val == data1) {
                    search2 = 1;
                    break;
                }
                cur_prev = cur;
                cur = cur->next;
            }
            if (search2 == 1) {
                printf("수정 완료.\n");
                cur->val = data2;
            }
            else {
                printf("오류입니다.\n");
            }
            break;
        case 4:
            printf("연결리스트 출력 : ");
            cur = head;
            while (cur != NULL){
                printf("%d ", cur->val);
                cur = cur->next;
            }
            puts("");
            break;
        case 5:
            return 0;
        default:       
            printf("!! 1부터 5사이의 수를 입력하세요 !!\n");
        }
    }
}