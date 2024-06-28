#include <stdio.h>
int main() {

    /* --- 산술 연산자 --- */
    int a = 8;
    int b = 3;

    // 덧셈
    printf("a + b = %d \n", a + b);
    // 뺄셈
    printf("a - b = %d \n", a - b);
    // 곱셈
    printf("a * b = %d \n", a * b);
    // 나눗셈
    printf("a / b = %d \n", a / b); // 정수형이기 때문에 소숫점 버림
    // 모듈러
    printf("a %% b = %d \n", a % b);


    /* --- 대입 연산자 --- */
    
    // a = a + 1;
    a = 1;
    printf("a : %d \n", a = a + 1); // a에 1을 더한 값을 변수 a에 대입
    
    // a += 1;
    a = 1;
    printf("a : %d \n", a = a + 1); // a에 1을 더한 값을 변수 a에 대입
    // a++;
    // ++a;

    /* --- 비트 연산자 --- */
    // OR
    // XOR
    // NOT
    // Shift
    
}