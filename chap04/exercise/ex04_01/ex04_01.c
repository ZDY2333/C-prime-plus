/*提示用户输入名和姓，然后以 “名 ，姓” 的格式输出*/

#include <stdio.h>
int main(void)
{
    char first[20], last[20];
    printf("请输入名：");
    scanf("%s", first);

    printf("请输入姓：");
    scanf("%s", last);

    printf("%s,%s\n", first, last);
    
    return 0;
}