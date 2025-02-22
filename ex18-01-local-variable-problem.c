/*
파일명: ex18-01-local-variable-problem.c

지역변수 한계

*/

#include <stdio.h>

char* getString(void)
{
    char str[100];
    printf("좋아하는 단어는? ");

    gets(str);

    printf("함수 안에서 결과: %s\n", str);

    return str;
}

int main(void)
{

    char *result = getString();

    printf("당신이 좋아하는 단어는: %s\n", result);
}