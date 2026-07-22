/* 测试整数上溢、浮点数上溢、浮点数下溢的系统处理效果 */
#include <stdio.h>

// 提供整型极值宏INT_MAX
#include <limits.h>
// 提供浮点极值宏FLT_MAX、FLT_MIN
#include <float.h>  

int main(void)
{
    // 1. 整数上溢测试（有符号int循环溢出）
    int int_max = INT_MAX;
    printf("int类型最大值：%d\n", int_max);
    printf("int最大值+1（整数上溢）：%d\n\n", int_max + 1);

    // 2. 浮点数上溢测试（超出float最大值，输出无穷大inf）
    float float_max = FLT_MAX;
    printf("float类型最大正值：%e\n", float_max);
    printf("float最大值*2（浮点数上溢）：%e\n\n", float_max * 2);

    // 3. 浮点数下溢测试（数值过小，精度丢失）
    float float_min = FLT_MIN;
    printf("float类型最小正规范化值：%e\n", float_min);
    printf("float最小值/2（浮点数下溢）：%e\n", float_min / 2);

    return 0;
}