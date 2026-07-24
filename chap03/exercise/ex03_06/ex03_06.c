/* 输入水的夸脱数，根据单分子质量、1夸脱水重量，计算水分子数量 */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    const float GRAM_PER_QUART = 950.0;      // 1夸脱水950克SW
    const float MASS_PER_MOLE = 3.0e-23;     // 单个水分子质量

    float total_gram,water_mole,quart;

    printf("请输入水的夸脱数：");
    scanf("%f", &quart);
    
    total_gram = quart * GRAM_PER_QUART;      // 计算总夸脱水总克量
    
    water_mole = total_gram / MASS_PER_MOLE;  // 计算对应水分子的数量

    printf("对应水分子数量：%10.7e 个\n", water_mole);
    return 0;
}