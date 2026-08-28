/* 7. 编写一个程序把一个单词读入一个字符数组中，然后倒序打印这个单词。
提示：strlen()函数可用于计算数组最后一个字符的下标。 */
#include <stdio.h>
#include <string.h>

int main(void)
{
    char word[100];
    printf("请输入一个单词：");
    scanf("%s", word);

    // strlen得到有效字符个数；最后一个字符下标是 len?1
    int len, i;
    len = strlen(word);
    for (i = len - 1; i >= 0; i--)
    {
        printf("%c", word[i]);
    }
    printf("\n");
    return 0;
}