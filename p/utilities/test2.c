#include <stdio.h>

int main(void)
{
    int *pointer;
    int i = 0;

    printf("start execution\n");

    while (i < 4)
    {
        printf("first while\n");
        *(pointer + i) = i;
        i ++;
    }
    i = 0;

    /**pointer = 0;
    *(pointer + 1) = 1;
    *(pointer + 2) = 2;
    *(pointer + 3) = 3;*/
    //*(pointer + 4) = 4;
    printf("end while\n");
    

    while (i < 5)
    {
        printf("VALUE (%d) = %d\n", i, *(pointer + i));
        i ++;
    }
}