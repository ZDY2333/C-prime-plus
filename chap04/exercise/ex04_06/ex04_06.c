/* 提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐 zhoudeyi 2026.7.28 */
/*
6. 编写一个程序，先提示用户输入名，然后提示用户输入姓。在一行打印用户输入的名和姓，
下一行分别打印名和姓的字母数。字母数要与相应名和姓的结尾对齐，如下所示：
Melissa Honeybee
      7        8
接下来，再打印相同的信息，但是字母个数与相应名和姓的开头对齐，如下所示：
Melissa Honeybee
7       8
*/
#include <stdio.h>
#include <string.h>
#include <stdint.h>

int main(void)
{
    char first_name[30], last_name[30];
    printf("输入名：");
    scanf("%s", first_name);
    printf("输入姓：");
    scanf("%s", last_name);

    uint32_t len_first_name = strlen(first_name);
    uint32_t len_last_name = strlen(last_name);

    // 第一组：末尾对齐
    printf("%s %s\n", first_name, last_name);
    printf("%*d %*d\n", len_first_name, len_first_name, len_last_name, len_last_name);

    // 第二组：开头对齐
    printf("%s %s\n", first_name, last_name);
    printf("%-*d %-*d\n", len_first_name, len_first_name, len_last_name, len_last_name);

    return 0;
}