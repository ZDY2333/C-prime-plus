#include <stdio.h>
int main(void)
{
    int age = 20;
    int one_year_days = 365;
    int days = age * one_year_days;
    printf("年龄：%d 岁\n", age);
    printf("对应天数：%d 天\n", days);
    return 0;
}