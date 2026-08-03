#include <stdio.h>

int main(void)
{
    int x = 100;
    while (x++ < 103)
    printf("%4d\n", x);
    printf("\n");
    printf("%4d\n", x);
}