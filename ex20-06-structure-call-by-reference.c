/*
ex20-06-structure-call-by-reference.c

구조체 Call by reference 예제
*/

#include <stdio.h>

typedef struct
{
    int xpos;
    int ypos;
}Point;

void setPosSameValue(Point* ptr)    // ptr = &position1 (position1의 주소값)
{
    if(ptr->xpos > ptr->ypos) {
        ptr->ypos = ptr->xpos;
    } else {
        ptr->xpos = ptr->ypos;
    }
}

void printPoint(Point position)
{
    printf("x: %d, y: %d\n", position.xpos, position.ypos);
}

int main(void) 
{

    Point position1 = {23, 66};
    Point position2 = {6, 3};

    // 주소값 전달
    setPosSameValue(&position1);
    setPosSameValue(&position2);

    // 각 포인트를 출력
    printPoint(position1);  // 66 66
    printPoint(position2);  // 6 6

    return 0;
}