/* 12. 考虑下面两个无限序列：
1.0 + 1.0/2.0 + 1.0/3.0 + 1.0/4.0 + …
1.0 ? 1.0/2.0 + 1.0/3.0 ? 1.0/4.0 + …
编写一个程序计算这两个无限序列的总和，直到到达某次数。
提示：奇数个 - 1 相乘得?1，偶数个?1 相乘得 1。
让用户交互地输入指定的次数，当用户输入 0 或负值时结束输入。
查看运行 100 项、1000 项、10000 项后的总和，是否发现每个序列都收敛于某值？ */
#include <stdio.h>

int main(void)
{
    int input;
    double sum1, sum2;

    printf("请输入要计算的项数（输入 0 或负数结束）:\n");
    scanf("%d", &input);

    while (input > 0)
    {
        sum1 = 0.0; // 第一行 
        sum2 = 0.0; // 第二行 
        int sign;
        int i;

        sign = 1;

        for (i = 1; i <= input; i++)
        {
            sum1 += 1.0 / i;
            sum2 += sign * (1.0 / i);
            sign = -1 * sign;    // 正负符号翻转
        }

        
        printf("项数 = %d\n", input);
        printf("序列1(调和级数)总和 = %f\n", sum1);
        printf("序列2(交错调和级数)总和 = %f\n", sum2);

        printf("请输入要计算的项数(输入 0 或负数结束):\n");
        
        scanf("%d", &input);
    }
    printf("程序结束\n");
    return 0;
}