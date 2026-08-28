/* 1. 编写一个程序，创建一个包含 26 个元素的数组，
并在其中存储 26 个小写字母。然后打印数组的所有内容。 */
#include <stdio.h>

int main(void)
{
    const int size = 26;
    char ch[26];
    int i;
    // 弄ASCII的数字并打印
    for (i = 0; i < size; i++)
    {
        ch[i] = 'a' + i;
        printf("%c ", ch[i]);
    }
}