#include <stdio.h>
#include <stdlib.h>
/*
Q. ���� ������ ������Ű�� ���α׷� ����
- �ڿ������� ������ �߰��ϴ� ���Ḯ��Ʈ ���� �� ���
- ����/����/���� ����
- ex) 1, 2, 3, 4, 5������ �����͸� �Է��ؼ� ��带 �߰��ϸ� 5��4��3��2��1���� ���� ������� ���Ḯ��Ʈ ����
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
        printf("1. �߰� 2. ���� 3. ���� 4. ��� 5. ����\n�Է� : ");
        scanf_s("%d", &num);

        switch (num) {
        case 1:
            printf("�����͸� �Է��ϼ��� : ");
            scanf_s("%d", &input);

            if (input <= 0)
                break;

            Node* newnode = (Node*)malloc(sizeof(Node));

            newnode->val = input;
            newnode->next = NULL;

            if (head == NULL)    // head�� NULL�̸� ���� ���Ḯ��Ʈ�� ��尡 ���ٴ� ��
                head = newnode;
            else{
                newnode->next = head;
                head = newnode;
            }
            break;        
        case 2:
            printf("������ �����͸� �Է��ϼ��� : ");
            scanf_s("%d", &index);

            if (index <= 0)
                break; 
            if (head == NULL) {
                printf("�����Դϴ�.\n");
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
                printf("%d ���� �Ϸ�.\n", index);
                if (cur == head) 
                    head = cur->next; 
                else 
                    cur_prev->next = cur->next; 

                free(cur);  
            }
            else{
                printf("%d�� ã�� �� �����ϴ�.\n", index);
            }
            break;
        case 3:   // 5 4 3 2 1
            printf("������ ���� �����͸� �Է��ϼ��� : \n");
            scanf_s("%d", &data1);
            printf("������ �������� ���� �Է��ϼ��� : \n");
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
                printf("���� �Ϸ�.\n");
                cur->val = data2;
            }
            else {
                printf("�����Դϴ�.\n");
            }
            break;
        case 4:
            printf("���Ḯ��Ʈ ��� : ");
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
            printf("!! 1���� 5������ ���� �Է��ϼ��� !!\n");
        }
    }
}