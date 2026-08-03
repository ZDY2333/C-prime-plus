#include <stdio.h>
#include <float.h>

int main(void)
{
    float f;
    double d;
    long double ld;

    f = 1.0f / 3.0f;
    d = 1.0 / 3.0;    // 之前的bug：不要1.0f/3.0f！
    ld = 1.0L / 3.0L; // long double字面量运算

    printf("float类型：\n");
    printf("%7.6f\n", f);
    printf("%13.12f\n", f);
    printf("%17.16f\n", f);
    printf("using __mingw_printf\n");
    __mingw_printf("%7.6f\n", f);
    __mingw_printf("%13.12f\n", f);
    __mingw_printf("%17.16f\n", f);
    printf("\n");

    printf("double类型：\n");
    printf("%7.6f\n", d);
    printf("%13.12f\n", d);
    printf("%17.16f\n", d);
    printf("using __mingw_printf\n");
    __mingw_printf("%7.6f\n", d);
    __mingw_printf("%13.12f\n", d);
    __mingw_printf("%17.16f\n", d);
    printf("\n");

    printf("long double类型：\n");
    printf("%7.6Lf\n", ld);
    printf("%13.12Lf\n", ld);
    printf("%17.16Lf\n", ld);
    printf("using __mingw_printf\n");
    __mingw_printf("%7.6Lf\n", ld);
    __mingw_printf("%13.12Lf\n", ld);
    __mingw_printf("%17.16Lf\n", ld);

    printf("\n");

    printf("FLT_DIG = %d\n", FLT_DIG);
    printf("DBL_DIG = %d\n", DBL_DIG);
    printf("LDBL_DIG = %d\n", LDBL_DIG);
    printf("using __mingw_printf\n");
    __mingw_printf("FLT_DIG = %d\n", FLT_DIG);
    __mingw_printf("DBL_DIG = %d\n", DBL_DIG);
    __mingw_printf("LDBL_DIG = %d\n", LDBL_DIG);
    return 0;
}