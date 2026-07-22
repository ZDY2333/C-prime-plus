/* 输入身高英寸数值，换算并输出对应的厘米高度 */
#include <stdio.h>

int main(void)
{
    //英寸转换厘米的转换率
    float INCH_TO_CM = 2.54f;
    float inch;

    printf("请输入身高（单位：英寸）：");
    scanf("%f", &inch);

    //计算输入英寸对应的厘米
    float cm = inch * INCH_TO_CM;
    printf("对应身高：%.2f 厘米\n", cm);
    return 0;
}