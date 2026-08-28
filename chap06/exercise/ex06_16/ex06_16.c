/* 16. Daphne 以 10% 的单利息投资了 100 美元（也就是说，每年投资获利相当于原始投资的 10%）。
Deirdre 以 5% 的复合利息投资了 100 美元（也就是说，利息是当前余额的 5%，包含之前的利息）。
编写一个程序，计算需要多少年 Deirdre 的投资额才会超过 Daphne，并显示那时两人的投资额。 */
#include <stdio.h>
#define EPS 1e-8
int main(void)
{
   
    const double interest_Deordre = 1.05; // 复合利息，年利率 5 %
    double interest_Daphne;
    double money_Dapne;
    double money_Deordre;

    int year;
    // 初始化本金与年份
    money_Dapne = 100.0;
    money_Deordre = 100.0;
    interest_Daphne = money_Dapne * 10 / 100; //单核利息，年利率 10 %
    year = 0;

    while (money_Deordre - money_Dapne <= EPS)
    {
        year++;
        money_Dapne += interest_Daphne;
        money_Deordre *= interest_Deordre;
    }

    printf("经过%d年，Deirdre投资额超过Daphne\n", year);
    printf("Daphne总资产：%.2lf 美元\n", money_Dapne);
    printf("Deirdre总资产：%.2lf 美元\n", money_Deordre);
    return 0;
}
