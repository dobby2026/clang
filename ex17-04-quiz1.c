/*
ex17-04-quiz1.c

Q1
두 정수의 차이(절대값)를 구하는 함수를 포인터를 사용하여 작성하세요
결과는 result 포인터가 가리키는 공간에 저장해야 합니다
*/

#include <stdio.h>

void getDifference(int *num1, int *num2, int *result)
{
    /*
    if (*num1 > *num2) {
        *result = *num1 - *num2;
    } else {
        *result = *num2 - *num1;
    }
    */

    *result = *num1 - *num2;
    if (*result < 0)  *result *= -1;
    
}

int main(void)
{

    int a = 7, b = 15, diff;
    getDifference(&a, &b, &diff);

    printf("두 수의 차이: %d\n", diff);

    return 0;
}