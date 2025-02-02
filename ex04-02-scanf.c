/*
파일명: ex04-02-scanf.c

scanf()
    데이터 입력에 사용되는 함수

    형식 지정자
        %d: 정수
        %f: 실수
        %c: 문자
        %s: 문자열
*/

#include <stdio.h>

int main(void)
{

    char character;
    int inum;
    float fnum;

    scanf("%c", &character);
    scanf("%d", &inum);
    scanf("%f", &fnum);

    printf("%c, %d, %f\n", character, inum, fnum);

    return 0;
}