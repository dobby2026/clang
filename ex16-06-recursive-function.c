/*
파일명: ex16-06-recursive-function.c
*/

#include <stdio.h>

/*
main()
    sayHello(1) - Hello
        sayHello(2) - Hello
            sayHello(3) - Hello return 0;

*/

int sayHello(int count)
{
    printf("Hello\n");

    if (count == 3) {
        return 0;
    }

    sayHello(count + 1);
}

int main(void)
{
    sayHello(1);
    return 0;
}

