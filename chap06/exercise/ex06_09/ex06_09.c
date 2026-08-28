/* 修改练习 8，使用一个函数返回计算的结果 */
#include <stdio.h>

double result(double x, double y)
{
    return (x - y) / (x * y);
}

int main(void)
{
    double a, b;
    double res;
    int ret;

    printf("请输入两个浮点数(输入非数字结束程序):\n");
    ret = scanf("%lf %lf", &a, &b);

    while (ret == 2)
    {

        res = result(a, b);     // 调用函数

        printf("(a-b)/(a*b) = %lf\n", res);
        printf("再输入两个浮点数：\n");
        ret = scanf("%lf %lf", &a, &b);
    }
    printf("程序结束\n");
    return 0;
}