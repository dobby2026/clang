/*
파일명: ex20-04-nested-structure-array.c

중첩구조체 배열
*/

#include <stdio.h>

typedef struct
{
    char title[100];
    int published;
}Book;

typedef struct
{
    Book book[3];
}Bag;

int main(void)
{
    Bag myBag = {
        {
            {"지금하지 않으면 언제 하겠는가", 2018},
            {"타이탄의 도구들", 2017},
            {"12가지 인생의 법칙", 2018}
        }
    };


    for(int i = 0; i < 3; i++) {
        printf("제목: %s, 출간년도: %d\n", myBag.book[i].title, myBag.book[i].published);
    }

    return 0;
}