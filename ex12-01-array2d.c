/*
파일명: ex12-01-array2d.c

2차원 배열
    배열 안에 배열

*/

#include <stdio.h>

int main(void)
{
    // 2x3 2차원배열
    int arr[2][3] = { 
        {1, 2, 3}, 
        {4, 5, 6} 
    };

    // 2차원배열 값 가져오기
    printf("%d\n", arr[0][2]);
    printf("%d\n", arr[1][1]);

    /* Quiz 반복문 사용
        1 2 3 
        4 5 6
    */

    for(int i = 0; i < 2; i++) {
        /*

        i = 0
        j = 0 1 2
        arr[0][0] arr[0][1] arr[0][2] 
        
        i = 1
        j = 0 1 2
        arr[1][0] arr[1][1] arr[1][2] 
        
        */

        for(int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }

        printf("\n");
    }


    arr[1][0] = 8;
    
    printf("%d\n", arr[1][0]);



    return 0;
}