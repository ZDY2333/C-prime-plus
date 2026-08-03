/**/
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    const uint32_t day_to_week = 7;
    int32_t day,week,leftday;

    printf("输入天数后转换为周数和天数。\n");
    printf("请输入天数：");
    scanf("%d", &day);

    while (day > 0)
    {
        week = day / day_to_week;
        leftday = day % day_to_week;

        printf("结果是 %d 周 %d 天。",week, leftday);
        printf("输入0结束程序或继续输入：");
        scanf("%d", &day);
    }
    printf("拜拜！！");
    return 0;
}