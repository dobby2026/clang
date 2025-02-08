/*
파일명: ex08-07-nested-loop.c

중첩 반복문
    하나의 반복문 안에 다른 반복문이 포함되어 있는 구조
*/

#include <stdio.h>

int main(void)
{
    /*
    i = 0, 1, 2, 3, 4, 5, 6, 7
    조건 i < 7

        j = 0
        조건 j < 7

        printf -> *
        printf -> **
        printf -> ***
        printf -> ****
        printf -> *****
        printf -> ******
        printf -> *******
    
    */

    for (int i = 0; i < 7; i++) {

        for(int j = 0; j < i+1; j++) {
            printf("*");
        }
        printf("\n");   // 줄바꿈
    }

    return 0;
}