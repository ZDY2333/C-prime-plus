/* 定义一个函数，接受一个 int 类型的参数，并以 long 类型返回该参数的平方值 */
#include <stdio.h>

long square(int num)
{
    return (long)num * num;
}
int main(void)
{
    int n = 10000;
    printf("%ld\n", square(n));
    return 0;
}