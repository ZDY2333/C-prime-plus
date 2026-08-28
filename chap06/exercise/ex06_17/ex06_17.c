/* 17. Chuckie Lucky 赢得了 100 万美元（税后），他把奖金存入年利率 8% 的账户。
在每年的最后一天，Chuckie 取出 10 万美元。编写一个程序，计算多少年后 Chuckie 会取完账户的钱？ */
#include <stdio.h>

int main(void)
{
    const double rate_interest = 1.08; // 年利率8%，年度本金翻倍系数
    const double take_out = 100000.0;  // 每年年末取出10万美元
    double money;                      
    int year;                          

    money = 1000000.0;
    year = 0;

    while (money > 0)
    {
        year++;
        money *= rate_interest; // 先结算当年8%利息
        money -= take_out;      // 年末取出10万美元
    }

    printf("经过%d年后账户余额被取空\n", year);
    printf("最终剩余账户余额：%.2lf 美元\n", money);
    return 0;
}