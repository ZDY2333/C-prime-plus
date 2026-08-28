/* 6. 编写一个程序打印一个表格，每一行打印一个整数、该数的平方、该数的立方。
要求用户输入表格的上下限。使用一个 for 循环。 */
#include <stdio.h>

int main(void)
{
    int low, high;
    printf("请输入下限和上限：");
    scanf("%d %d", &low, &high);

    printf("数\t平方\t立方\n");
    
    for (int i = low; i <= high; i++)
    {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }
    return 0;
}