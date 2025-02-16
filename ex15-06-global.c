/*
파일명: ex15-06-global.c

전역변수
    프로그램 시작과 동시에 메모리 공간에 할당되어 종료 때 까지 존재
    프로그램 모든 영역에서 접근 가능
    전역변수와 지역변수 이름이 동일한 경우 지역변수가 사용된다
*/

#include <stdio.h>

// 전역변수
int number = 0;

void printNumber(void)
{
    printf("전역변수 number는 %d을(를) 저장하고 있다\n", number);
    number++;
}

int main(void)
{
    int number = 3;
    printf("지역변수 number는 %d을(를) 저장하고 있다\n", number);
    printNumber();  // 0
    printNumber();  // 1
    printNumber();  // 2
    printNumber();  // 3
    printNumber();  // 4
    printNumber();  // 5
    printNumber();  // 6

    return 0;
}