/*
파일명: ex08-02-loop.c

while 문 예제
*/

#include <stdio.h>

int main(void)
{
    int num = 0;

    while (num != -1) {
        printf("숫자를 입력하세요(-1 입력시 종료): ");
        scanf("%d", &num);

        if (num == -1) {
            printf("반복 종료합니다.\n");
        } else {
            printf("%d을(를) 입력하였습니다.\n", num);
        }
    }

    printf("프로그램 종료합니다.");

    return 0;
}