#include <stdio.h>

void jolly(void)
{
    char *a = "For he's a jolly good fellow!";
    printf("%s\n", a);
}

void deny(void)
{
    char *b = "Which vobody can deny!";
    printf("%s\n", b);
}

int main(void)
{
    jolly();
    jolly();
    jolly();

    deny();

    return 0;
}
