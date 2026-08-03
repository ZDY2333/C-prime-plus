/* 提示用户输入身高（单位：英寸）和姓名，然后以固定的格式显示用户刚输入的信息 zhoudeyi 2026.7.28 */
/*
4. 编写一个程序，提示用户输入身高（单位：英寸）和姓名，然后以下面的格式显示用户刚输入的信息：
Dabney, you are 6.208 feet tall
*/
#include <stdio.h>

int main(void)
{
    char name[40];
    float inches;    // 赋值英寸
    float feets;    // 1英尺 = 12英寸 

    printf("请输入姓名：");
    scanf("%s",name);

    printf("请输入身高（英寸）：");
    scanf("%f", inches);

    feets = inches / 12.0f;
    printf("%s, you are %.3f feet tall\n", name ,feets);
    return 0;
}