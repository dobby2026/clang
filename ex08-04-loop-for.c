/*
파일명: ex08-04-loop-for.c

3. for 문
    for (변수 초기화; 조건식; 증감식) {
        반복 수행할 코드
    }
*/
#include <stdio.h>

int main(void)
{
    /*
    int i = 0;
    while (i < 10) {
        printf("i is %d now\n", i);
        i++;
    }
    */

    // 위 while문 for문으로 작성
    for(int i = 0; i < 10; i++) {
        pritnf("i is %d now\n", i);
    }
    
    return 0;
}