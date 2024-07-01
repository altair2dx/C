#include <stdio.h>
int main() {

    /* --- for문의 구조 --- */
    // for (초기식; 조건식; 증감식;) {
    //   ~~~
    // }
    // 조건식이 성립하는 동안 for문 반복 실행, 매 반복마다 증감식 실행

    // 예제 : 1부터 100까지의 합
    int sum = 0;
    for (int a = 1; a <= 100; ++a) { 
        sum = sum + a; 
    }
    printf("1부터 100까지의 합 : %d \n", sum);


    /* --- break문 --- */
    // for문에서 break를 만나면 for문 밖으로 빠져나간다.
    int b;
    for (int b = 1; b <= 10; ++b) {
        printf("b : %d \n", b);
        if (b == 5) {
            break; // b=5가 되면 for문 중단. 따라서 1~4까지만 출력된다.
        }
    }


    /* --- continue문 --- */
    // for문에서 continue를 만나면 for문을 패스한다. break와는 다르게 for문을 빠져나가지 않는다.
    int c;
    for (int c = 1; c <= 10; ++c) {
        if (c % 2 != 0) continue; 
        printf("c : %d \n", c); // c가 홀수면 for문이 패스되며 출력하지 않는다.
    }
}