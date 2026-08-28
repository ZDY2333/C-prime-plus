/* 数组读入 8 个整数，倒序打印 */
#include <stdio.h>

int main(void)
{
    int arr[8];
    int i;

    printf("请输入8个整数：\n");
    for (i = 0; i < 8; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("倒序输出：");
    // 从最后一个下标7倒回到0
    for (i = 7; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}