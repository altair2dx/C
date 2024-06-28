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
    
    // a = a + 1; -- 대입 연산
    a = 1;
    printf("a : %d \n", a = a + 1); // a에 1을 더한 값을 변수 a에 대입
    
    // a += 1; -- 복합 대입 연산
    a = 1;
    printf("a : %d \n", a = a + 1); // a에 1을 더한 값을 변수 a에 대입


    /* --- 증감 연산자 --- */

    // a++; -- 후위형 
    a = 1;
    printf("a : %d \n", a++); // a를 출력한 후 변수 a에 1을 더하여 저장

    // ++a; -- 전위형
    a = 1;
    printf("a : %d \n", ++a); // 변수 a에 1을 더하여 저장한 후 a를 출력


    /* --- 비트 연산자 --- */
    a = 0xAF;  // 10101111
    b = 0xB5;  // 10110101
    
    // AND
    printf("AND : %x \n", a & b);  // 10100101

    // OR
    printf("OR : %x \n", a | b);  // 10111111

    // XOR
    printf("XOR : %x \n", a ^ b);  // 00011010

    // NOT
    printf("NOT : %x \n", ~a);  // 11111111 11111111 11111111 01010000  -- int로 변수 선언을 했기 때문에 32비트로 저장된다.

    // Shift
    printf("Left Shift : %x \n", a << 2);  // 1010111100
    printf("Right Shift : %x \n", b >> 3);  // 00010110
    
}
