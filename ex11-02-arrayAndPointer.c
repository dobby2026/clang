/*
파일명: ex11-02-arrayAndPointer.c

포인터 이용 배열 연산
    포인터 변수의 값을 1씩 증가시켜 '포인터형'의 크기 만큼 주소값을 증가할 수 있다
*/

#include <stdio.h>


int main(void)
{
    short sarr[3] = {1, 2, 3};
    int iarr[3] = {10, 20, 30};

    // 인덱스 번호를 통한 접근
    printf("%d %d %d\n", sarr[0], sarr[1], sarr[2]);
    printf("%d %d %d\n", iarr[0], iarr[1], iarr[2]);

    // 포인터 연산을 통한 접근
    printf("%d %d %d\n", *sarr, *(sarr+1), *(sarr+2));
    printf("%d %d %d\n", *iarr, *(iarr+1), *(iarr+2));



    return 0;
}
