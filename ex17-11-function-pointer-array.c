/*
파일명: ex17-11-function-pointer-array.c

포인터 함수 배열 예제
*/

#include <stdio.h>

double add(double a, double b) {return a + b;}
double subtract(double a, double b) {return a - b;}
double multiply(double a, double b) {return a * b;}
double divide(double a, double b) {return a / b;}

void caculator(double (*operation)(double, double), double num1, double num2) 
{
    printf("결과: %.2f\n", operation(num1, num2));
}

int main(void)
{
    double (*operations[])(double, double) = {add, subtract, multiply, divide};
    char operators[] = {'+', '-', '*', '/'};

    double num1 = 10.0, num2 = 5.0;

    for(int i = 0; i < 4; i ++) {
        printf("%.1f %c %.1f = ", num1, operators[i], num2);
        caculator(operations[i], num1, num2);
    }

    return 0;
}