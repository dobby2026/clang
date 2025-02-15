/*
파일명: ex11-01-arrayAndPointer.c

포인터와 배열의 관계
    배열의 이름은 포인터 변수 역할을 한다
    시작 메모리 주소 확인 가능!

    단 값 저장이 불가능 상수 이다
*/

#include <stdio.h>

int main(void)
{

    int myArr[3] = {1, 2, 3};

    printf("배열의 이름: %p\n", myArr);             // 00000000005FFE94
    printf("배열 &myArr[0]: %p\n", &myArr[0]);     // 00000000005FFE94
    printf("배열 &myArr[1]: %p\n", &myArr[1]);     // 00000000005FFE98
    printf("배열 &myArr[2]: %p\n", &myArr[2]);     // 00000000005FFE9C

    printf("배열 myArr+0: %p\n", myArr+0);     // 00000000005FFE94
    printf("배열 myArr+1: %p\n", myArr+1);     // 00000000005FFE98
    printf("배열 myArr+2 %p\n",  myArr+2);     // 00000000005FFE9C


    return 0;
}