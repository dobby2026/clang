/*
파일명: ex13-01-string.c
*/

#include <stdio.h>

int main(void)
{
    // 배열 기반 문자열
    char good[] = "GOOD!";      // char good[] = {'G', 'O', 'O', 'D', '!', '\0'}
    // 포인터 기반 문자열
    char *bad = "Bad!";         // char bad = (&)"Bad!"

    printf("1-1) %s\n", good);
    printf("1-2) %s\n", bad);

    // 문자열 수정
    good[0] = 'H';      // 배열기반 - 요소로 값 변경 가능
    // bad[0] = 'S';    // 포인터기반 - 요소로 값 변경 불가능

    printf("2-1) %s\n", good);
    printf("2-2) %s\n", bad);

    // good = "NEW GOOD!";
    bad = "NEW BAD!";

    // printf("3-1) %s\n", good);
    printf("3-2) %s\n", bad);

    return 0;
    
}