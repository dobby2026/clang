/*
ex17-10-function-pointer-array.c

함수 포인터 배열 선언
*/

#include <stdio.h>

void sayHello()
{
    printf("안녕하세요!\n");
}
void sayBye()
{
    printf("안녕히가세요!\n");
}
void sayThank()
{
    printf("감사합니다!\n");
}

int main(void)
{
    /*
    함수 포인터 배열선언
    void를 반환하고 매개변수가 없는 함수들의 포인터 배열
    */
    void (*msgFunc[3])() = {sayHello, sayBye, sayThank};

    msgFunc[0]();
    msgFunc[1]();
    msgFunc[2]();


    return 0;
}