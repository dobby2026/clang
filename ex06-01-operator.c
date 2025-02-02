/*
파일명: ex06-01-operator.c

4. 논리 연산자
    && (AND): 피연산자가 모두 참이면 참
    || (OR): 피연산자 중 참이 있으면 참
    !  (NOT): 피연산자가 참(1)이면 거짓(0), 거짓(0)이면 참(1) 반전

*/
#include <stdio.h>

int main(void)
{
    int num1 = 20, num2 = 10;

    int result;
    result = 1 && 1;
    printf("1) result: %d\n", result);


    result = num1 == 20 && num2 == 10;
    printf("2) result: %d\n", result);
    
    result = num1 == 50 || num2 == 330;
    printf("3) result: %d\n", result);

    result = !(num1 == 50 || num2 == 330);
    printf("4) result: %d\n", result);



    return 0;
}
