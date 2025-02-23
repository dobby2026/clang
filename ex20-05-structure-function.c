/*
파일명: ex20-05-structure-function.c

구조체 함수
    구조체 변수를 함수의 인자로 전달
    또 함수로부터 반환할 수 있다
*/

#include <stdio.h>

typedef struct 
{
    int s_id;
    int age;
}Student;

Student setStudent(int s_id, int age) 
{
    Student s = {s_id, age};
    return s;
}

void printStudent(Student s) 
{
    printf("학번: %d, 나이: %d\n", s.s_id, s.age);
}

int main(void)
{
    Student s = setStudent(20250223, 20);
    printStudent(s);

}
