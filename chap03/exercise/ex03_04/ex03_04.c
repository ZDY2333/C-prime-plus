/* 读取浮点数，分别以普通小数、科学指数、十六进制p记数法三种格式输出 */
#include <stdio.h>
int main(void)
{
    float num;
    printf("请输入一个浮点数：");
    scanf("%f", &num);

    printf("普通小数格式：%10.4f\n", num);
    printf("科学计数法格式：%e\n", num);
    printf("十六进制p记数法：%a\n", num);
    return 0;
}