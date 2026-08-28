/* 2. 使用嵌套循环，按下面的格式打印字符：
$
$$
$$$
$$$$
$$$$$ */
#include <stdio.h>

int main(void)
{
    const int n = 5;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("$");
        }
        printf("\n");
    }
    return 0;
}