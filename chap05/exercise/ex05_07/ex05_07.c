/* */

#include <stdio.h>

void cube(double num);

int main(void)
{
    double input;
    printf("请输入一个double类型的数：");
    scanf("%lf", &input);

    cube(input);
}

void cube(double num)
{
    double result;
    result = num * num * num;
    printf("%10.2lf 的立方是：%10.2lf", num, result);
}