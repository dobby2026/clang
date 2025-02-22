/*
파일명: ex17-07-quiz4.c
양의 정수를 입력받아 각 자릿수를 뒤집어 출력하는 재귀함수를 작성하세요
예) 1234 -> 4321
*/
#include <stdio.h>

void reverseNumber(int n)
{
    /*
    if(n < 1) return;

    int result = n % 10;
    n = n / 10; 
    printf("%d", result);

    reverseNumber(n);
    */

    if(n < 10) {
        printf("%d", n);
        return;
    }
    printf("%d", n % 10);
    reverseNumber(n / 10);
    

}

int main(void)
{
    int num = 1234;
    reverseNumber(num);
    return 0;
}