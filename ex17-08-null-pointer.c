/*
파일명: ex17-08-null-pointer.c

NULL 포인터
    - 아무것도 가리키지 않는 포인터
    - 포인터변수 초기화에 사용
    - 0번지를 가리키는 포인터
*/

#include <stdio.h>

int main(void)
{   
    // NULL 포인터 선언
    int *ptr1 = NULL;
    int num = 10;
    int *ptr2 = &num;

    printf("ptr1은 NULL 입니까? %s\n", ptr1 == NULL ? "yes" : "no" );
    printf("ptr2은 NULL 입니까? %s\n", ptr2 == NULL ? "yes" : "no" );


    return 0;
}