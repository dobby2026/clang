/*
파일명: ex06-05-operator.c

8. 삼항 연산자
    조건식 ? 조건식 참일 경우 실행 : 조건식 거짓일 경우 실행

*/

#include <stdio.h>

int main(void)
{
    int num = -10;
    int absolute = num > 0 ? num : num * -1;
    printf("절대값: %d\n", absolute);

    return 0;
}