/*
파일명: ex03-02-unsigned.c

unsigned 자료형
    부호 없는 데이터
    0 이상 표현
    음수 포기 대신 양수 표현 범위가 커진다
*/

#include <stdio.h>

int main(void)
{
    char cnum = 128;
    unsigned char u_cnum = 255; 
    short snum = 32768;
    unsigned short u_snum = 32768;

    printf("%d\n", cnum);
    printf("%d\n", u_cnum);
    printf("%d\n", snum);
    printf("%d\n", u_snum);

    return 0;
}