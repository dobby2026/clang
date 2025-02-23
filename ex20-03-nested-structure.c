/*
파일명: ex20-03-nested-structure.c

중첩 구조체
    멤버 변수로 구조체 변수 선언
*/

#include <stdio.h>

typedef struct 
{
    char title[100];
    int published;
}Book;

typedef struct
{
    Book book;
}Bag;

int main(void)
{
    // 구조체 변수를 선언과 동시에 초기화
    Bag myBag = {
        {"지금 하지 않으면 언제 하겠는가", 2018}
    };

    printf("책 제목: %s \n출간년도: %d년\n", myBag.book.title, myBag.book.published);

    return 0;
}

