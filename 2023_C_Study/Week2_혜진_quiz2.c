#include <stdio.h>

/*
2. 피보나치 수열을 재귀함수를 통해 구현하세요.
     1 1 2 3 5 8 13 ...
*/

int Fibo(int num) {         // num = 4
    if (num==1||num==2){
        return 1;
    }
    return Fibo(num - 2) + Fibo(num - 1);   // 2 : (1의 값 반환)   3 : (2의 값 반환)
}

int main(void) {
    int num;
    printf("숫자 입력: ");
    scanf_s("%d", &num);
    printf("%d",Fibo(num));
}