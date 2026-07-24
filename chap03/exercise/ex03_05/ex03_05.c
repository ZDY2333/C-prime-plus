/* 输入年龄，根据一年3.156×10^7秒，计算并输出年龄对应的总秒数 */
/* 2026.7.24 修改：使用无符号整形 */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    const uint32_t SecAll_Year = 3.156e7;

    uint32_t age;
    uint32_t AllSec;
    
    printf("请输入你的年龄：");
    scanf("%lld", &age);

    AllSec = age * SecAll_Year;

    printf("你的年龄共有 %lld 秒\n",AllSec);
}