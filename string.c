#include <stdio.h>
int main() {

    /* --- 문자 저장 및 반환 ---*/
    char a = 'a';
    printf("%c : %d \n", a, a); // a : 97 출력 -- ASCII에서 a의 값은 97

    /* --- scanf 함수 --- */
    double b;
    printf("숫자를 입력해주세요. : ");
    scanf("%lf", &b);
    //scanf는 자료형마다 지정자가 정해져있음 
    // & (앰퍼샌드) 는 변수의 주소를 지정하기 위해 사용
    printf("입력한 숫자 : %lf", b);

}