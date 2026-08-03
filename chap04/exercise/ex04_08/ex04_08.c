/* 输入行驶英里数与消耗汽油加仑数，计算每加仑行驶英里数(mpg)，并换算等效百公里油耗(L/100km) */
#include <stdio.h>

int main(void)
{
    const float GALLON_TO_LITRE = 3.785;    
    const float MILE_TO_KM = 1.609;  
    float miles;    // 行驶里程，单位
    float gallons;     // 英里消耗燃油，单位 加仑

    float miles_per_gallon;     // 每加仑汽油能行驶多少英里
    float litre_per_100km;    // 百公里油耗

    printf("行驶里程(英里)：");
    scanf("%f", &miles);
    printf("消耗汽油(加仑)：");
    scanf("%f", &gallons);

    miles_per_gallon = miles / gallons;
    // 换算 L/100km
    litre_per_100km = (gallons * GALLON_TO_LITRE) / (miles * MILE_TO_KM) * 100.0;

    printf("每加仑行驶 %.1f 英里\n", miles_per_gallon);
    printf("等效油耗 %.1f L/100km\n", litre_per_100km);
    return 0;
}
