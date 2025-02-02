/*
파일명: ex03-01-data.c

데이터 표현방식
    컴퓨터는 2진수로 표현(bit)

    정수표현
        부호비트(Most Sinificant Bit) + 수치비트

        예) 10진수 5를 1바이트 -> 0 0000101

    실수표현(부동소수)
        부호비트 + 지수부(e)비트 + 가수부(m)비트
    실수 표현 수식
        ±(1.m)*2^(e-127) -> 32비트



0.1(10진수) 2진수변환

0.1 x 2 = 0.2 (0)
0.2 x 2 = 0.4 (0)
0.4 x 2 = 0.8 (0)
0.8 x 2 = 1.6 (1)
0.6 x 2 = 1.2 (1)
0.2 x 2 = 0.4 (0)
0.4 x 2 = 0.8 (0)
0.8 x 2 = 1.6 (1)
0.6 x 2 = 1.2 (1)
...

0.1 -(2진수 변환)-> 0.000110011001100... (무한순환소수)

정규화 1.10011001100.. x 2^(-4)

±(1.m)*2^(e-127) -> 32비트

m: 10011001100, e:123(10) -> 01111011(2)

float(32비트) 기준 0.1 저장
0 | 01111011 | 10011001100110011001100
부호비트(1) | 지수부(8) | 가수부(23)

컴퓨터는 실수를 정확히 표현 못한다!!!!!!!!!!!!!!
실수값을 저장할때 데이터크기가 큰 타입일수록 근사치에 가까워진다!

*/

#include <stdio.h>

int main(void)
{
    float fNum = 0.0f;
    double dNum = 0.0;
    /*
    반복문
        for(초기식; 조건식; 증감식) {
            반복실행할 코드
        }
    */

    for(int i = 0; i < 100; i++) {
        fNum = fNum + 0.1;
        dNum = dNum + 0.1;
    }

    printf("fNum: %.20f\n", fNum); // 10.00000190734863281250
    printf("dNum: %.20f\n", dNum); // 9.99999999999998046007

    return 0;
}