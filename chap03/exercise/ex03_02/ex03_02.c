/* 接收用户输入的ASCII十进制编码，打印该编码对应的字符 */
#include <stdio.h>

int main(void)
{
    int code;
    printf("请输入ASCII码数值:");
    scanf("%d", &code);
    printf("该编码对应的字符：%c\n", code);
    return 0;
}