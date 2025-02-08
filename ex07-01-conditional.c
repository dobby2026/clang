/*
파일명: ex07-01-conditonal.c

조건문
    조건시의 결과에 따라 별도의 명령을 수행하도록 제어하는 코드

1-1 if문

    if (조건식) {
        조건이 참일 경우 수행할 코드
    }
    
    if (조건식) 수행할 코드; (코드가 하나일경우 중괄호 생략 가능)

*/

#include <stdio.h>

int main(void)
{
    int num = 10;

    if (num < 3) {
        printf("num is small than 3!\n");
    }

    if (num == 3) printf("num is 3!\n");

    if (num > 3) {
        printf("num is bigger than 3!\n");
    }

    return 0;
}