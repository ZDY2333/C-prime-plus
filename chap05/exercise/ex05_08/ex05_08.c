/* */
#include <stdio.h>
#include <stdint.h>

int main(void)
{
    int32_t first_operand, second_operand, result;
    //printf("请输入第一个数:");
    printf("This program computes moduli.\n");
    printf("Enter an interger to serve as the second operand:");
    scanf("%d", &second_operand);
    //printf("请输入第二个数：");
    printf("Now enter the first operand:");
    scanf("%d", &first_operand);
    while (first_operand > 0)
    {
        result = first_operand % second_operand;

        printf("%8d / %8d is %8d\n", first_operand, second_operand, result);
        printf("Enter next number for first operand (<= 0 to quit):");
        // printf("%d / %d 的求模结果为：%d\n", second_operand, first_operand ,result);
        // printf("请输入第二个数(输入非正数程序结束)：\n");
        scanf("%d", &first_operand);
    }
    printf("Done\n");

    return 0;
}