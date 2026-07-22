/* 输入年龄，根据一年3.156×10^7秒，计算并输出年龄对应的总秒数 */
#include <stdio.h>

int main(void)
{
    int age;
    double SecAll_Year = 3.156*10e7;
    printf("请输入你的年龄：");
    scanf("%d", &age);
    double AllSec = age * SecAll_Year;

    printf("你的年龄共有 %f 秒",AllSec);


}