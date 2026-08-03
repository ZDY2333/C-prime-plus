/* 提示用户输入名字，按照指定的格式输出结果  zhoudeyi 2026.7.28 */
/*
2. 编写一个程序，提示用户输入名字，并执行以下操作：
a. 打印名字，包括双引号；
b. 在宽度为 20 的字段右端打印名字，包括双引号；
c. 在宽度为 20 的字段左端打印名字，包括双引号；
d. 在比姓名宽度宽 3 的字段中打印名字。
*/
#include <stdio.h>
#include <string.h>
int main(void)
{
    char name[40];
    
    printf("输入名字：");
    scanf("%s", name);

    // a
    printf("\"%s\"\n", name);
    // b 宽度20，右对齐
    printf("\"%20s\"\n", name);
    // c 宽度20，左对齐
    printf("\"%-20s\"\n", name);
    // d 宽度=字符串长度+3
    printf("\"%*s\"\n", strlen(name) + 3, name);

    return 0;
}