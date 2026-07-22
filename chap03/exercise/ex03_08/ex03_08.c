/* 输入杯容量，换算成品脱、盎司、大汤勺、茶勺四种美式体积单位 */
#include <stdio.h>

int main(void)
{
    float cup;

    printf("请输入杯数：");
    scanf("%f", &cup);

    //杯容量四种不同单位的转换
    float pint = cup / 2;
    float ounce = cup * 8;
    float spoon = ounce * 2;
    float tea_spoon = spoon * 3;

    printf("品脱：%.2f\n", pint);
    printf("盎司：%.2f\n", ounce);
    printf("大汤勺：%.2f\n", spoon);
    printf("茶勺：%.2f\n", tea_spoon);
    return 0;
}