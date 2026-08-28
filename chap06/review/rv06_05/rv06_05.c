/* 下面的程序有点问题，请找出问题所在 */
#include <stdio.h>
/* 原代码 */
// #include <stdio.h>
// int main(void)
// {
//     int i, j, list(10);       // ❌错误1
//     for (i = 1, i <= 10, i++) // ❌错误2
//     {
//         list[i] = 2 * i + 3;
//         for (j = 1, j >= i, j++) // ❌错误3
//             printf(" %d", list[j]);
//         printf("\n");
//     }
//     return 0;
// }

/* 修改后 */
int main(void)
{
    int i, j, list[11]; // 数组大小改为11，下标可用1~10
    for (i = 1; i <= 10; i++)
    {
        list[i] = 2 * i + 3;
        for (j = 1; j <= i; j++)
            printf(" %d", list[j]);
        printf("\n");
    }
    return 0;
}