/*
파일명: ex17-06-quiz3.c

Q3
배열에서 최대값과 최소값을 찾아 포인터로 전달될 변수에 저장하는 함수를 작성하세요
*/

#include <stdio.h>

void findMinMax(int *arr, int size, int *min, int *max)
{
    *min = *max = *arr;

    for(int i = 1; i < size; i++) {
        if(*min > *(arr + i)) *min = *(arr + i);
        if(*max < *(arr + i)) *max = *(arr + i);
    }

}

int main(void)
{
    int numbers[6] = {3, 7, 1, 9, 4, 6};
    int minimum, maximum;

    findMinMax(numbers, 6, &minimum, &maximum);
    printf("최소값: %d, 최대값: %d\n", minimum, maximum);

    return 0;
}