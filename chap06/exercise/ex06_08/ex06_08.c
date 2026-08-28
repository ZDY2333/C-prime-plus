/* 8. 编写一个程序，要求用户输入两个浮点数，并打印两数之差除以两数乘积的结果。
在用户输入非数字之前，程序应循环处理用户输入的每对值。 */
#include <stdio.h>

int main(void)
{
    double a, b;
    double result;
    int ret;

    printf("请输入两个浮点数(输入非数字结束程序):\n");
    ret = scanf("%lf %lf", &a, &b);

    while (ret == 2)
    {
        result = (a - b) / (a * b);

        printf("(a?b)/(a*b) = %.4lf\n", result);
        printf("再输入两个浮点数：\n");
        ret = scanf("%lf %lf", &a, &b);
    }
    printf("程序结束\n");
    return 0;
}