/* */
#include <stdio.h>

int main(void)
{
    double value;
    for (value = 36.0; value > 0; value /= 2)
        printf("%6.1f", value);
    return 0;
}