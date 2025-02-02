/*
파일명: ex05-03-operator.c

3. 비교연산자(관계연산자)
    두 값의 관계를 비교하여 참(1) 또는 거짓(0) 반환하는 연산자

    >   : 크다
    >=  : 크거나 같다
    <   : 작다
    <=  : 작거나 같다
    ==  : 같다
    !=  : 다르다

*/
#include <stdio.h>

int main(void)
{
    int a = 10, b = 11;
    
    printf("a > b: %d\n", a > b);
    printf("a >= b: %d\n", a >= b);
    printf("a < b: %d\n", a < b);
    printf("a <= b: %d\n", a <= b);
    printf("a == b: %d\n", a == b);
    printf("a != b: %d\n", a != b);

    return 0;
}

