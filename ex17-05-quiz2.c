/*
파일명: ex17-05-quiz2.c

quiz2 
배열의 요소를 한칸씩 오른쪽으로 이동시키는 함수를 작성하세요
마지막 요소는 첫 번째 위치로 이동합니다
포인터 연산을 사용해야 합니다
*/

#include <stdio.h>

void rotateRight(int *arr, int size) 
{
    /*
    int last = *(arr + size - 1);

    for(int i = 0; i < size; i++) {
        *(arr + (size - i) - 1) = *(arr + (size - i) - 2);
    }
    *arr = last;
    */

    int last = arr[size - 1];

    for(int i = 0; i < size; i++) {
        arr[(size - i) - 1] = arr[(size - i) - 2];
    }
    arr[0] = last;

}

int main(void) 
{
    int number[5] = {1, 2, 3, 4, 5};
    rotateRight(number, 5);

    // number 배열 순차적 출력(printf) 완성하세요
    for(int i = 0; i < 5; i++) {
        printf("%d\n", number[i]);
    }


    return 0;
}
