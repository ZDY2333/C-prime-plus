/**/
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    const uint32_t length = 10;
    int32_t num, end;
    
    printf("输入一个整数，然后打印从该数开始比他打10个整数.\n");
    printf("请输入一个整数：");
    scanf("%d", &num);
    end = num + length;
    while (num <= end)
    {
        printf("%d ",num);
        num++;
    }
    return 0;
}