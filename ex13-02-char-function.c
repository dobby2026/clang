/*
파일명: ex13-02-char-function.c

char 관련 함수
    getchar() - 문자 입력 함수
    putchar() - 문자 출력 함수

*/

#include <stdio.h>

int main(void)
{

    char ch1, ch2, temp;
    ch1 = getchar();        // 문자 scanf()
    ch2 = getchar();    

    // SWAP 
    temp = ch1;
    ch1 = ch2;
    ch2 = temp;

    putchar(ch1);          // 문자 printf()
    putchar(ch2);


    return 0;
}