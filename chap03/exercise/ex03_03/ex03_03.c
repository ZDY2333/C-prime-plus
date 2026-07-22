/* 输出蜂鸣警报声，打印指定的带引号英文文本 */
#include <stdio.h>

int main(void)
{
    // \a 蜂鸣警报
    printf("\a");
    printf("Started by the sudden sound, Sally shouted,\n");
    printf("\"By the Great Pumpkin, what was that!\"\n");
    return 0;
}