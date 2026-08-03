/* */
#include <stdio.h>

// Celsius：摄氏度 ℃,Fahrenheit：华氏度 ℉ ,Kelvin：开尔文 K
void Temperatures(double Fahrenheit)
{
    const double Celsius_Coef = 5.0 / 9.0;
    const double Kelvin_Offset = 273.16;
    const double Fahrenheit_Offset = 32.0;
    double Celsius, Kelvin;

    Celsius = Celsius_Coef * (Fahrenheit - Fahrenheit_Offset);
    Kelvin = Celsius + Kelvin_Offset;

    printf("摄氏度(C) %8.1lf 度\n", Celsius);
    printf("华氏度(F) %8.1lf 度\n", Fahrenheit);
    printf("开氏温度(K) %8.1lf 度\n\n", Kelvin);

}

int main(void)
{
    double fahrenheit;
    printf("请输入一个华氏温度(输入q或非数字退出程序):\n");
    int scanf_result;
    scanf_result = scanf("%lf", &fahrenheit);
    
    while (scanf_result == 1)
    {
        Temperatures(fahrenheit);
        printf("请输入一个华氏温度(输入q或非数字退出程序):\n");
        scanf_result = scanf("%lf", &fahrenheit);
    }
    printf("c程序结束。\n");
    return 0;
}