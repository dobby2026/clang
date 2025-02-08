/*
파일명: ex08-03-loop.c

2 do ~ while 문
    while 문과 동일하나, 최초 한번은 실행된다

*/
#include <stdio.h>

int main(void)
{
    int num = 100;

    do {
        printf("num is %d now\n", num);
        num++;
    } while (num < 3);

    return 0;
}



