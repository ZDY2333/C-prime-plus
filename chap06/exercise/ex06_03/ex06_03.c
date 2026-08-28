/* 使用嵌套循环，按下面的格式打印字母
F
FE
FED
FEDC
FEDCB
FEDCBA */
#include <stdio.h>

int main(void)
{
    int row, col;
    // 外层循环控制行数，共6行
    for (row = 1; row <= 6; row++)
    {
        // 内层循环：每行从F往前输出row个字母
        for (col = 0; col < row; col++)
        {
            // 根据 ASCII 表打印
            printf("%c", 'F' - col);
        }
        printf("\n");
    }
    return 0;
}