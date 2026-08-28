/*  */
#include <stdio.h>

int main(void)
{
    int i = 0;

    while (++i < 4)
        printf("Hi! ");
    do
        printf("Bye! ");
    while (i++ < 0);
    return 0;
}