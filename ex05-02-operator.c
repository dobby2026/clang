/*
파일명: ex05-02-operator.c

2. 대입연산자
    연산자 오른쪽에 있는 값을 왼쪽에 있는 변수에 대입

    일반대입연산자 (=)

    복합대입연산자
        +=, -=, *=, /=, %=
*/

#include <stdio.h>

int main(void)
{
    int num1 = 3, num2 = 4;
    num1 += 3;  // num1 = num1 + 3;
    num2 *= 2;  // num2 = num2 * 2;

    printf("%d\n", num1);
    printf("%d\n", num2);

    return 0;
}