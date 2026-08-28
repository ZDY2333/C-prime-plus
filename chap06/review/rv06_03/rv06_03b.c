/* scanf () 读取 double 类型值且失败 */
#include <stdio.h>

int main(void)
{
    double x;
    printf("请输入一个小数：");

    if (scanf("%lf", &x) != 1) 
    {
        printf("读取失败.\n");
    }
    else
    {
        printf("读取成功，数值是：%.2lf\n", x);
    }
    return 0;
}