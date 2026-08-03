/*  */
#include <stdio.h>
#include <stdint.h>
int main(void)
{
    uint32_t count, sum, day;

    count = 0;
    sum = 0;
    printf("请输入天数:");
    scanf("%d", &day);

    while (count++ < day)
    {
        sum = sum + count * count;
        printf("第 %5d 天, sum = %5d\n", count, sum);
    }

    return 0;
}