/* 5. 编写一个程序，提示用户输入大写字母。使用嵌套循环以下面金字塔型的格式打印字母：
    A
   ABA
  ABCBA
 ABCDCBA
ABCDEDCBA
*/
#include <stdio.h>
int main(void)
{
    int row, col;
    char input;
    int max_row;

    printf("请输入大写字母：");
    scanf("%c", &input);
    // 动态计算总行数
    max_row = input - 'A';

    // 随输入字母自动控制行数
    for (row = 0; row <= max_row; row++)
    {
        // 打印前置空格，实现金字塔居中
        for (col = 0; col < max_row - row; col++)
        {
            printf(" ");
        }
        // 升序打印 A 到当前层级字母
        for (col = 0; col <= row; col++)
        {
            printf("%c", 'A' + col);
        }
        // 降序打印后半段回文字母
        for (col = row - 1; col >= 0; col--)
        {
            printf("%c", 'A' + col);
        }
        printf("\n");
    }
    return 0;
}