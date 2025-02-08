/*
파일명: ex08-01-loop.c

반복문
    특정한 부분의 코드가 반복적으로 수행될 수 있도록 하는 구문


1 while 문
    
    while (조건식) {
        반복 수행할 코드
    }


*/

#include <stdio.h>

int main(void) 
{
    int num = 0;

    while (num < 1000) {
        printf("num is %d now\n", num);
        num++;
    }

    return 0;
}


