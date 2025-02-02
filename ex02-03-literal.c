/*
파일명: ex02-03-literal.c

리터럴(Literal)
    소스코드에서 고정된 값을 직접 표현하는 방식
    값이 그 자체로 고정된 상수를 의미

    예) 정수형 리터럴: 10, -10, 1, 2
        실수형 리터럴: 2.7, 3.14
        문자형 리터럴: 'A', 'B', 'C'

심볼릭 상수(const)
    상수에 이름을 붙여준 것
    초기 값을 저장하면 변경 불가
    프로그램 흐름을 따라 컴파일 됨

매크로 상수
    심볼릭 상수 일종
    컴파일시 가장먼저 매크로 상수 처리


* 상수는 가독성을 위해 대문자로 표기 권장합니다!

*/

#include <stdio.h>
#define LENGTH 10   // 매크로 상수 세미콜론이 필요하지 않다

int main(void)
{
    int number = 3;
    const int NUMBER = 5;
    number = 10;

    // NUMBER = 25; // 상수는 값을 변경할 수 없다! 변경시 컴파일 에러 발생!

    printf("%d\n", LENGTH);
    printf("%d\n", number);
    printf("%d\n", NUMBER);

    return 0;
}
