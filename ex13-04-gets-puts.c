/*
파일명: ex13-04-gets-puts.c

문자열 관련함
    gets() - 문자열 입력함수
    puts() - 문자열 출력함수
*/

#include <stdio.h>

int main(void)
{
    char ch[30];
    
    gets(ch);

    puts(ch);   // 자동으로 줄바꿈

    return 0;
}


