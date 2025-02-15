/*
파일명: ex10-02-pointer.c
*/

#include <stdio.h>

int main(void)
{
    int num = 10;
    int *pnum;
    pnum = &num;

    printf("%d\n", *pnum);

    num = 14;

    printf("%d\n", *pnum);

    *pnum = 30;

    printf("%d\n", num);

    (*pnum)++;
    (*pnum)++;

    printf("%d\n", num);
    
    return 0;
}