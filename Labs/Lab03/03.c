#include <stdio.h>

void main()
{
    int num = 1000;
    const int divisor = 7;

    calcQuotRem(num, divisor);
    num = 2000;
    calcQuotRem(num, divisor);
    num = 3000;
    calcQuotRem(num, divisor);
}

void calcQuotRem(int num, int divisor)
{
    printf("%d / %d = %d with remainder of %d\n", num, divisor, num/divisor, num%divisor);
}
