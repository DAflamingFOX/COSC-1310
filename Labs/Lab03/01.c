#include <stdio.h>


void main()
{
    int a, x = 10;
    a = x++;
    printf("a = %d, x = %d.\n", a, x);

    a = 0, x = 10;
    a = ++x;
    printf("a = %d, x = %d.\n", a, x);
    return 0;
}
