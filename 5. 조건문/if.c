#include <stdio.h>
int main() {

    /* --- if ~ --- */
    int a;
    printf("Type 1 ~ 3 number : ");
    scanf("%d", &a); // a의 값을 입력받고

    if (a == 1) { // a가 1이면 중괄호 안의 코드를 실행한다.
        printf("You typed 1.");
    }


    /* --- if ~ else ~ --- */
    int b;
    printf("Type 1 ~ 3 number : ");
    scanf("%d", &b); // b의 값을 입력받고

    if (b == 1) { // b가 1이면 아래 코드를 실행한다.
        printf("You typed 1.");
    }
    else { // b가 1이 아니면 아래 코드를 실행한다.
        printf("You didn't type 1.");
    }


    /* --- if ~ else if ~ else ~ --- */
    int c;
    printf("Type 1 ~ 3 number : ");
    scanf("%d", &c); // c의 값을 입력받고

    if (c == 1) { // c가 1이면 아래 코드를 실행한다.
        printf("You typed 1.");
    }
    else if (c == 2) { // c가 2이면 아래 코드를 실행한다.
        printf("You typed 2.");
    }
    else if (c == 3) { // c가 3이면 아래 코드를 실행한다.
        printf("You typed 3.");
    }
    else { // 이외의 경우면 아래 코드를 실행한다.
        printf("You typed wrong number");
    }


    /* --- 논리 연산자 --- */
    
}