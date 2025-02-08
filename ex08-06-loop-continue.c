/*
파일명: ex08-06-loop-continue.c

continue 문
    반복문에서 해당 방복을 건너뛰고 다음 반복을 실행 강제 명령어
*/
#include <stdio.h>

int main(void)
{
    int num;
    for (num = 1; num <= 5; num++) {

        if (num % 2 != 0) continue;
        
        printf("%d\n", num);
    }


    return 0;
}