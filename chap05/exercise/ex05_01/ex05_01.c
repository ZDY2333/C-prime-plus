/**/

#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("%d\n", INT_MAX);
    printf("%d\n", INT_MIN);

    const int MIN_TO_HOUR = 60;

    int mins, hours, leftmins;

    printf("请输入分钟,输入 0 或者负值结束程序：");
    scanf("%d", &mins);
    while (mins > 0)
    {
        hours = mins / MIN_TO_HOUR;
        leftmins = mins % MIN_TO_HOUR;

        printf("结果为 %5d 小时 %5d 分钟。\n----------\n", hours, leftmins);
        printf("输入 0 结束程序。继续输入：");
        scanf("%d", &mins);
    }
    printf("拜拜");
    return 0;
}