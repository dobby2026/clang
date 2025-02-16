/*
파일명: ex16-02-function-array.c

매개변수에서만 특별히 허용되는 문법
    int arr[] = arr

*/

#include <stdio.h>

int readArray(int arr[], int length)    // int arr[] = 배열주소값
{
    int i;
    printf("배열의 요소 읽어보기: [ ");
    for (i = 0; i < length; i++) {  // i = 0 1 2 
        // printf("%d", arr[i]);
        printf("%d", *(arr + i));
        if (i + 1 < length) {
            printf(", ");
        } else {
            printf(" ");
        }
    }
    printf("]\n");

}

int main(void)
{
    int arr[3] = {3, 6, 9};
    int length = 3;

    printf("arr 주소값: %p\n", arr);    // 005FFE90

    readArray(arr, length); // 배열의 요소 출력

    return 0;
}