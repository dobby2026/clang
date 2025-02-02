/*
파일명: ex04-03-scanf.c

scanf() 입력구분
    공백(space), 탭(tab), 개행(Enter)

*/

#include <stdio.h>

int main(void)
{
    int num1, num2, num3;
    float fnum1, fnum2;

    printf("세 개의 정수입력: ");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("입력된 정수들: %d %d %d\n", num1, num2, num3);

    printf("실수, 정수, 실수 차례대로 입력: ");
    scanf("%f %d %f", &fnum1, &num1, &fnum2);
    printf("입력된 값들: %f %d %f", fnum1, num1, fnum2);

    return 0;
}
