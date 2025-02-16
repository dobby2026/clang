/*
파일명: ex15-02-function.c
*/

#include <stdio.h>

// add 함수의 원형(선언부)
int add(int a, int b);
void printHello(void);  // void - 비어있음/없음

int main(void)
{
    int result;

    result = add(3, 5);

    printf("함수가 반환한 값: %d\n", result);

    printHello();

    return 0;
}

// 함수의 기능 정의부
int add(int a, int b)
{
    return a + b;
}

// 리턴 타입이 없는 함수
void printHello(void)
{
    printf("Hello, World!");
}