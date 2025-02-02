/*
파일명: ex05-01-operator.c

연산자

1. 산술연산자
    +, -, *(곱하기), /(나누기), %(나머지값)

*/
#include <stdio.h>

int main(void)
{
    int num1 = 7, num2 = 3;
    printf("%d + %d = %d\n", num1, num2, num1 + num2);
    printf("%d - %d = %d\n", num1, num2, num1 - num2);
    printf("%d * %d = %d\n", num1, num2, num1 * num2);
    printf("%d / %d = %d\n", num1, num2, num1 / num2);
    printf("%d %% %d = %d\n", num1, num2, num1 % num2);

    return 0;
}
