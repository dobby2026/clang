/*
파일명: ex20-02-structrue-pointer.c
*/

#include <stdio.h>

typedef struct
{
    int x;
    int y;
}Point;

typedef struct
{
    Point* start;
    Point* end;
}Line;

int main(void)
{
    Point p1 = {10, 8};
    Point p2 = {20, 40};

    Line line = {&p1, &p2};

    printf("선의 시작점: [%d %d]\n", (*line.start).x, (*line.start).y);
    printf("선의 끝: [%d %d]\n", (*line.end).x, (*line.end).y);

    printf("선의 시작점: [%d %d]\n", line.start->x, line.start->y);
    printf("선의 끝: [%d %d]\n", line.end->x, line.end->y);

    return 0;
}
