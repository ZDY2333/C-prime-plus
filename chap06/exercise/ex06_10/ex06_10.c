/* 10. 编写一个程序，要求用户输入一个上限整数和一个下限整数，
计算从上限到下限范围内所有整数的平方和，并显示计算结果。
然后程序继续提示用户输入上限和下限整数，并显示结果，
直到用户输入的上限整数等于或小于下限整数为止。程序的运行示例如下：
Enter lower and upper integer limits: 5 9
The sums of the squares from 5 to 9 is 255
Enter next set of limits: 3 25
The sums of the squares from 9 to 625 is 5520
Enter next set of limits: 5 5
Done */
#include <stdio.h>

int main(void)
{
    int upper, lower, input;
    int i;
    long long sum;

    printf("Enter lower and upper integer limits: ");
    input = scanf("%d %d", &lower, &upper);

    while (input == 2 && upper > lower)
    {
        sum = 0;
        for (i = lower; i <= upper; i++)
        {
            sum += i * i;
        }
        printf("The sums of the squares from %d to %d is %lld\n", lower, upper, sum);
        printf("Enter next set of limits: ");
        input = scanf("%d %d", &lower, &upper);
    }
    printf("Done\n");
    return 0;
}