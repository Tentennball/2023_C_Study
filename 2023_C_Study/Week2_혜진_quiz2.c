#include <stdio.h>

/*
2. �Ǻ���ġ ������ ����Լ��� ���� �����ϼ���.
     1 1 2 3 5 8 13 ...
*/

int Fibo(int num) {         // num = 4
    if (num==1||num==2){
        return 1;
    }
    return Fibo(num - 2) + Fibo(num - 1);   // 2 : (1�� �� ��ȯ)   3 : (2�� �� ��ȯ)
}

int main(void) {
    int num;
    printf("���� �Է�: ");
    scanf_s("%d", &num);
    printf("%d",Fibo(num));
}