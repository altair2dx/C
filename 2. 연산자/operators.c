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
    
    // a = a + 1; | 대입 연산
    a = 1;
    printf("a : %d \n", a = a + 1); // a에 1을 더한 값을 변수 a에 대입
    
    // a += 1; | 복합 대입 연산
    a = 1;
    printf("a : %d \n", a = a + 1); // a에 1을 더한 값을 변수 a에 대입


    /* --- 증감 연산자 --- */

    // a++; | 후위형 
    a = 1;
    printf("a : %d \n", a++); // a를 출력한 후 변수 a에 1을 더하여 저장

    // ++a; | 전위형
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
    printf("NOT : %x \n", ~a);  // 11111111 11111111 11111111 01010000 | int로 변수 선언을 했기 때문에 32비트로 저장된다.

    // Shift | 비트를 정해진 수만큼 옆으로 이동시킨다.
    printf("Left Shift : %x \n", a << 2);  // 1010111100
    printf("Signed Right Shift : %x \n", b >> 3);  // 00010110
    printf("Unsigned Right Shift : %x \n", a >>> 2); //00101011
        // 숫자를 넣을 자리가 없으면 버린다.
        // 위의 Left Shift 예제에서 숫자가 버려지지 않은 이유는, a의 자료형이 int 이므로 a의 실제 값은 00000000 00000000 00000000 10101111로 저장되어 있기 때문이다.
        // Signed Right Shift 후 빈 자리는 sign bit로 채운다.
        // Unsigned Right Shift 후 빈 자리는 0으로 채운다.

    // 산술변환 | 서로 범위가 다른 자료형끼리 계산 시 범위가 큰 자료형으로 자료형이 바뀐다. 
    
}
