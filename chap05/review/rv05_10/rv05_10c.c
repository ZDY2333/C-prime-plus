#include <stdio.h>

int main(void)
{
    char ch = 's';
    while (ch <= 'w')
    {
        printf("%c\n", ch);
        ch++;
    }
    printf("%c\n", ch);
}