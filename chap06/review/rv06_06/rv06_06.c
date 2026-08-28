/* 6. 编写一个程序打印下面的图案，要求使用嵌套循环：
$$$$$$$$
$$$$$$$$
$$$$$$$$
$$$$$$$$ */
#include <stdio.h>

int main(void)
{
    int row;    //row（行），代表第几行。
    int col;    //column（列），代表第几列。

    // 打印4行
    for (row = 1; row <= 4; row++)
    {
        // 每行打8个$
        for (col = 1; col <= 8; col ++)
        {
            printf("$");
        }
        printf("\n");
    }
}