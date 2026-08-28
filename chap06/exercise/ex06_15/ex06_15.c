/* 15. 编写一个程序，读取一行输入，然后把输入的内容倒序打印出来。可以把输入存储在 char 类型的数组中，
假设每行字符不超过 255。回忆一下，根据 % c 转换说明，scanf () 函数一次只能从输入中读取一个字符，
而且在用户按下 Enter 键时 scanf () 函数会生成一个换行字符 (\n)。 */
#include <stdio.h>

int main(void)
{
    char buf[256];
    int idx; // 整型变量 idx，全称 index 下标
    
    idx = 0;
    printf("请输入一行文字：\n");
    scanf("%c", &buf[idx]);
    
    while (buf[idx] != '\n') 
    {
        idx++; 
        scanf("%c", &buf[idx]);
    }

    printf("倒序结果：");

    for (int i = idx - 1; i >= 0; i--)
    {
        printf("%c", buf[i]);
    }

    printf("\n");
    return 0;
}