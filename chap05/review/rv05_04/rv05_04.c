#include <stdio.h>

int main(void)
{
    int i = 1;
    float n;
    printf("Watch out! i++Here come a bunch of fractions!\n");
    while (i <= 30)
    {
        n = 1.0 / i;
        printf(" %d, %f\n", i, n);
        i++;
    }
    return 0;
}