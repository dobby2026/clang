/*
파일명: ex13-99-lotto.c

11 13 33 19 29 44

*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    int lotto[6] = {0};
    // int lotto[6] = {0, 0, 0, 0, 0, 0};

    int temp;
    int isDuplicate;

    // 난수 생성을 위한 시드 설정
    srand(time(NULL));

    // 6개의 로또 번호 생성
    for (int i = 0; i < 6; i++) {

        do {
            isDuplicate = 0;
            temp = rand() % 45 + 1;     // 1부터 45사이의 랜덤 숫자 생성

            for(int j = 0; j < i; j++) {
                if(lotto[j] == temp) {
                    isDuplicate = 1;
                    break;
                }
            }
        } while(isDuplicate);

        lotto[i] = temp;
    }

    // 생성된 로또 번호 출력
    for (int i = 0; i < 6; i++) {
        printf("%d ", lotto[i]);
    }

    printf("\n");

    return 0;
}