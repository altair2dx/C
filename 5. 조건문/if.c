#include <stdio.h>
int main() {

    /* --- if문의 구조 --- */
    // if (조건식) {
    //  ~~~
    // }
    // 조건식이 참이면 if문 실행 


    /* --- if ~ --- */
    int a;
    printf("Type 1 ~ 3 number : ");
    scanf("%d", &a); // a의 값을 입력받고

    if (a == 1) { // a가 1이면 중괄호 안의 코드를 실행한다.
        printf("You typed 1. \n");
    }


    /* --- if ~ else ~ --- */
    int b;
    printf("Type 1 ~ 3 number : ");
    scanf("%d", &b); // b의 값을 입력받고

    if (b == 1) { // b가 1이면 아래 코드를 실행한다.
        printf("You typed 1. \n");
    }
    else { // b가 1이 아니면 아래 코드를 실행한다.
        printf("You didn't type 1. \n");
    }


    /* --- if ~ else if ~ else ~ --- */
    int c;
    printf("Type 1 ~ 3 number : ");
    scanf("%d", &c); // c의 값을 입력받고

    if (c == 1) { // c가 1이면 아래 코드를 실행한다.
        printf("You typed 1. \n");
    }
    else if (c == 2) { // c가 2이면 아래 코드를 실행한다.
        printf("You typed 2. \n");
    }
    else if (c == 3) { // c가 3이면 아래 코드를 실행한다.
        printf("You typed 3. \n");
    }
    else { // 이외의 경우면 아래 코드를 실행한다.
        printf("You typed wrong number. \n");
    }


    /* --- 논리 연산자 --- */

    // 논리 곱 연산자 (&&) = AND
    int d;
    printf("Type 1 ~ 10 number : ");
    scanf("%d", &d); // d를 입력받는다.

    if (d >= 2 && d <= 9) { // d가 2이상 9이하면 아래 코드를 실행한다.
        printf("%d is 2 ~ 9. \n", d);
    }
    else { // 이외의 경우면 아래 코드를 실행한다.
        printf("%d is 1 or 10. \n", d);
    }

    // 논리 합 연산자 (||) = OR
    int e;
    printf("Type 1 ~ 10 number : ");
    scanf("%d", &e); // e를 입력받는다.

    if (e == 5 || e == 10) { // e가 5 또는 10이면 아래 코드를 실행한다.
        printf("%d is multiple of 5.  \n", e);
    }
    else { // 이외의 경우면 아래 코드를 실행한다.
        printf("%d is not multiple of 5. \n", e);
    }

    // 논리 부정 연산자 (!) = NOT
    int f;
    printf("Type 1 ~ 10 number : ");
    scanf("%d", &f); // e를 입력받는다.

    if (!f) { // f가 0이 아니면 아래 코드를 실행한다. | 0의 부정은 1이기 때문이다.
        printf("%d is not 0. \n", e);
    }
    else { // 이외의 경우면 아래 코드를 실행한다.
        printf("%d is 0 \n", e);
    }

}