/* 输入水的夸脱数，根据单分子质量、1夸脱水重量，计算水分子数量 */
#include <stdio.h>

int main(void)
{
    // 1夸脱水950克
    double GRAM_PER_QUART = 950; 
    // 单个水分子质量
    double MASS_PER_MOLE = 3.0e-23; 
    
    double quart;
    printf("请输入水的夸脱数：");
    scanf("%lf", &quart);

    //计算总夸脱水总克量
    double total_gram = quart * GRAM_PER_QUART;
    //计算对应水分子的数量
    double water_mole = total_gram / MASS_PER_MOLE;
    
    printf("对应水分子数量：%e 个\n", water_mole);
    return 0;
}