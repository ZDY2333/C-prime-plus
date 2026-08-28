/* 18. Rabnud 博士加入了一个社交圈。起初他有 5 个朋友。
他注意到他的朋友数量以下面的方式增长。第 1 周少了 1 个朋友，剩下的朋友数量翻倍；第 2 周少了 2 个朋友，剩下的朋友数量翻倍。
一般而言，第 N 周少了 N 个朋友，剩下的朋友数量翻倍。编写一个程序，计算并显示 Rabnud 博士每周的朋友数量。
该程序一直运行，直到超过邓巴数 (Dunbar's number)。
邓巴数是粗略估算一个人在社交圈中有稳定关系的成员的最大值，该值大约是 150。 */


#include <stdio.h>
int main(void)
{
    const int dunbar = 150; // 邓巴数上限150
    int friend_num;
    int week;

    friend_num = 5;
    week = 0;

    while (friend_num <= dunbar)
    {
        week++;
        friend_num = (friend_num - week) * 2;
        printf("第%d周朋友数量：%d\n", week, friend_num);
    }

    printf("朋友数量超过邓巴数150，程序结束\n");
    return 0;
}