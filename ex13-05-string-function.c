/*
파일명: ex13-05-string-function.c

문자열 처리함수
    1. strlen - 문자열 길이
    2. strcpy - 문자열 복사
    3. strncpy - 문자열 원하는 개수만큼 복사

*/

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "apple is good!";
    char str2[50] = "berry is good!";
    char str3[50];

    // 각 문자열의 길이 출력
    printf("str1의 길이: %d, str2의 길이: %d\n", sizeof(str1), sizeof(str2));
    printf("str1의 길이: %d, str2의 길이: %d\n", strlen(str1), strlen(str2));

    strcpy(str3, str1);
    printf("%s\n", str3);

    strncpy(str2, str1, 2); // str1의 처음 2글자만 str2에 복사
    printf("%s\n", str2);

    strncpy(&str2[2], &str1[2], 3);
    printf("%s\n", str2);

    char str4[50] = "clang is good";
    strncpy(str3, str4, 5);
    printf("%s\n", str3);

}