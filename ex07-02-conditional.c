/*
파일명: ex07-02-conditional.c

1-2 if ~ else 문

    if (조건식) {
        조건이 참일 경우 수행할 코드
    } else {
        조건이 거짓일 경우 수행할 코드 
    }
    
    if (조건식) 참일 경우 수행할 코드;
    else 거짓일 경우 수행할 코드;

*/

#include <stdio.h>

int main(void)
{
    char alpha = 'A';

    if (alpha == 'B') {
        printf("alpha is B.\n");
    } else {
        printf("alpha is not B.\n");
    }

    return 0;
}