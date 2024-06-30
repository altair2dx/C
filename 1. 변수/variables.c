#include <stdio.h>
int main() {

    /* --- 변수 선언 --- */
    int a; // a라는 변수를 만들어라
    int b = 1; // b라는 변수를 만들고 1을 대입해라

    /* --- 변수명규칙 --- */

    // 영어 알파벳, 숫자, _로만 구성
    // 맨 첫 글자는 항상 문자
    // 띄어쓰기 X
    // 예약어 사용 X (int, double, ...)


    /* --- 정수형 --- */
    // char : 1byte
    char c;

    // short : 2byte
    short d;

    // int : 4byte (정확히는 최소 2byte 의 범위를 포함한 정수형, 32bit 이상 환경에서는 4byte)
    int e;

    // long : 4~8byte (OS마다 다르므로 권장하지 않음, 32bit : 4byte | 64bit : 8byte | 예외적으로 Windows 64bit : 4byte)
    long f;

    // long long : 8byte
    long long g;

    // unsigned를 앞에 붙이면 부호 없는 정수형(양수)
    unsigned char h;
    unsigned int i;

    // 서식지정자 %d(10진수), %o(8진수), %x(16진수), %ld(long형), %lld(long long형)
    printf("b : %d \n", b);
    printf("b : %5d \n", b); // 자리수가 5가 되도록 출력


    /* --- 실수형 --- */

    // float : 4byte
    float j = 3.141592f; //f를 붙여야 float형으로 인식

    // double : 8byte
    double k = 3.141592;

    // 서식지정자 %f
    printf("j : %f \n", j); 
    printf("j : %.2f \n", j); //소수점 둘째자리까지 출력
    
}