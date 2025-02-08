/*
파일명: ex08-08-updowngame.c
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {

    // 정수형 변수 3개 0으로 초기화
    int answer, guess, tries = 0;

    // 난수 생성을 위한 시드 설정
    srand(time(NULL));

    // 1부터 100사이의 랜덤 숫자 생성
    answer = rand() % 100 + 1;

    printf("answer: %d\n", answer);

    printf("1부터 100 사이의 숫자를 맞춰보세요!\n");

    while (1) {
        printf("숫자를 입력하세요: ");
        scanf("%d", &guess);
        tries++;

        printf("guess: %d\n", guess);

        if (guess > answer) {
            printf("Down! 더 작은 숫자입니다.\n");
        } 
        else if (guess < answer) {
            printf("Up! 더 큰 숫자입니다.\n");
        }
        else {
            printf("정답입니다! %d번 만에 맞추셨습니다.\n", tries);
            break;
        }
    }

    return 0;
}

