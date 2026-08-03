/* 读取一个浮点数，首先以小数点记数法打印，然后以指数记数法打印，并用指定格式输出 */
#include <stdio.h>

int main(void)
{
    float num;
    printf("请输入浮点数：");
    scanf("%f", &num);

    printf("The input is %.1f or %.1e\n", num, num);
    printf("The input is %+.3f or %.3E\n", num, num);
    return 0;
}