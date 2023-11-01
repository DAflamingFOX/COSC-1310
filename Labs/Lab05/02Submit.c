#include <stdio.h>
#include <math.h>

unsigned int fun(unsigned int);

int main()
{
    printf("A3 -> %d", fun(3));
    return 0;
}

unsigned int fun(unsigned int a)
{
    if (a == 0)
        return 1;
    return pow(fun(a - 1) + 1, 2) / 2;
}
