/*
파일명: ex02-04-cast.c

자료형 변환
    데이터의 타입을 변경하는 것
*/

#include <stdio.h>

int main(void)
{
    double number1 = 10;
    int number2 = 1.23456;
    short number3 = 70000;  // -32,768 ~ +32,767

    // 자동 형변환 결과
    printf("number1: %f\n", number1);
    printf("number2: %d\n", number2);
    printf("number3: %d\n", number3);

    // 명시적 형변환
    printf("%d\n", (short)3.1415);
    printf("%d\n", (int)3.1415);
    printf("%f\n", (double)10);
    printf("%f\n", (float)10);

    return 0;
}