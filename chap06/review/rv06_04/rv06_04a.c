/*  scanf () 成功读入一个整数 */
#include <stdio.h>

int main(void)
{
    int num;
    printf("请输入一个整数：");

    if (scanf("%d", &num) == 1) 
    {
        printf("成功读入：%d\n", num);
    }
    else
    {
        printf("读入失败\n");
    }
    return 0;
}