/* 使用嵌套循环，按下面的格式打印字母
A
BC
DEF
GHIJ
KLMNO
PQRSTU
VWXYZ */
#include <stdio.h>

int main(void)
{
    int row, col;
    int start;
    start = 0;
    // 外层循环控制行数，共7行
    for (row = 1; row <= 7; row++)
    {
        for(col = 0; col < row; col++)
        {
            printf("%c", 'A' + col + start);
        }
        start = start + col;   // 本行用完row个字母，更新下一行起始位置
        printf("\n");
        
    }
    return 0;
}