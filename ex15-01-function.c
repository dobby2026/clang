/*
파일명: ex15-01-function.c

함수(function)
    프로그래밍에서 함수는 하나의 특별한 목적의 작업을 수행하기 위해 독립적으로 설계된 프로그램 코드 집합

함구 구조

리턴타입 함수명(매개변수타입 매개변수명)
{
    (수행할 코드 ...)

    return 리턴값;
}

*/

#include <stdio.h>

// 사용자 정의 함수 선언
int add(int a, int b)   // int a = 3, int b = 5
{

    return a + b;
}

int main(void)  // 프로그램 시작점 main() 함수
{
    int result;

    // 사용자 정의 함수 호출
    result = add(3, 5);

    printf("함수가 반환한 값: %d\n", result);

    return 0;
}



