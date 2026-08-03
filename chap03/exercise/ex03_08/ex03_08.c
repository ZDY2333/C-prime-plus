/* 输入杯容量，换算成品脱、盎司、大汤勺、茶勺四种美式体积单位 */
#include <stdio.h>

int main(void)
{
    float cup;

    printf("请输入杯数：");
    scanf("%f", &cup);

    //杯容量四种不同单位的转换
    float pint;
    float tea_spoon;
    float ounce;
    float spoon;

    pint = cup / 2.0;
    ounce = cup * 8.0;
    spoon = ounce * 2.0;
    tea_spoon = spoon * 3.0;

    printf("品脱：%.2f\n", pint);
    printf("盎司：%.2f\n", ounce);
    printf("大汤勺：%.2f\n", spoon);
    printf("茶勺：%.2f\n", tea_spoon);
    return 0;
}