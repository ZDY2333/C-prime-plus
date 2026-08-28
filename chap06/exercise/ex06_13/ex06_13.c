/* 13. 编写一个程序，创建一个包含 8 个元素的 int 类型数组，
分别把数组元素设置为 2 的前 8 次幂。
使用 for 循环设置数组元素的值，使用 do while 循环显示数组元素的值。 */
#include <stdio.h>

int main(void)
{
    int arr[8];
    int i;
    
    // for循环给数组赋值：2的0~7次幂
    for (i = 0; i < 8; i++)
    {
        arr[i] = arr[1] * 2;
    }
    // do while循环遍历输出数组
    i = 0;
    do
    {
        printf("arr[%d] = %d\n", i, arr[i]);
        i++;
    } while (i < 8);
    return 0;
}