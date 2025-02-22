/*
ex17-03-double-pointer-swap.c

더블포인터 스왑 예제
*/

#include <stdio.h>

void sawapNumber(int **dptr1, int **dptr2)
{
    int *temp;

    temp = *dptr1;
    *dptr1 = *dptr2;
    *dptr2 = temp;

}

int main(void)
{
    int number1 = 33, number2 = 99;

    int *ptr1 = &number1;
    int *ptr2 = &number2;

    printf("%p, %p, %p, %p\n", &number1, &number2, &ptr1, &ptr2 );

    sawapNumber(&ptr1, &ptr2);

    printf("number1: %d, number2: %d\n", number1, number2);
    printf("*ptr1: %d, *ptr2: %d\n", *ptr1, *ptr2);

    return 0;
}
