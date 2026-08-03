/* 提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小,
以固定的格式打印 3 个变量的值（下载速度、文件大小和下载时间），显示小数点后面两位数字 zhoudeyi 2026.7.28 */
/*
5. 编写一个程序，提示用户输入以兆位每秒（Mb/s）为单位的下载速度和以兆字节（MB）为单位的文件大小。
程序中应计算文件的下载时间。注意，这里 1 字节等于 8 位。使用float类型，并用/作为除号。
该程序要以下面的格式打印 3 个变量的值（下载速度、文件大小和下载时间），显示小数点后面两位数字：
At 18.12 megabits per second, a file of 2.20 megabytes
downloads in 0.97 seconds.
*/
#include <stdio.h>

int main(void)
{
    float speed, file_size, time;
    printf("下载速度(Mb/s)：");
    scanf("%f", speed);
    printf("文件大小(MB)：");
    scanf("%f", file_size);

    time = file_size * 8.0f / speed;  // 1 Byte = 8 Bit
    printf("At %.2f megabits per second, a file of %.2f megabytes\ndownloads in %.2f seconds.\n",
           speed, file_size, time);
    return 0;
}