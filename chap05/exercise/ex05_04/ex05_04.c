/**/
#include <stdio.h>

int main(void)
{
    const float inch_to_cm = 2.54; //英寸转厘米
    const float feet_to_inch = 12.0; //英尺转英寸
    float cms,inches,feets;
    // printf("输入一个身高（单位厘米），分别以厘米，英尺，英寸为单位显示。\n");
    // printf("请输入身高：");
    printf("Enter a height in centimeters: ");
    scanf("%f", &cms);

    while(cms > 0.0)
    {
        inches = cms / inch_to_cm;
        feets = inches / feet_to_inch;

        // printf("以厘米为单位：%8.2f\n", cms);
        // printf("以英寸为单位：%8.2f\n", inches );
        // printf("以英尺为单位：%8.2f\n", feets);

        // printf("----------\n输入非正值结束运行。\n");
        // printf("请输入身高:");

        printf("%10.2f cm = %10.2f feet, %10.2f inches\n", cms, feets, inches);
        printf("Enter a height in centimeters(<=0 to quit): ");
        scanf("%f", &cms);
    }
    printf("bye");
    return 0;
}