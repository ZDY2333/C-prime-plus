/* charcode.c--显示字符的代码编号 */
#include <stdio.h>

int main(void)
{
    char ch;

    printf("Please enter a character.\n");
    /* 用户输入字符 */
    scanf("%c", &ch); 
    printf("The code for %c is %d.\n", ch, ch);
    return 0;
}