#include <stdio.h>

#define TEN 10
#define base 48

int main(void)
{
    int n = 0;
    while (n < TEN)
    {
    printf("%5c", n+base);
    printf("\n");
    n++;
    }
    return 0;
}