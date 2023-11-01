#include <stdio.h>

int multiply(int, int);
int multiplyRecurse(int, int);

int main()
{
    int a, b;
    a = 4, b = 5;
    printf("%d times %d = %d\n", a, b, multiply(a, b));
    printf("%d times %d = %d\n", a, b, multiplyRecurse(a, b));
    return 0;
}

int multiply(int a, int b)
{
    int sum = 0;
    for(; a > 0; a--)
        sum += b;
    return sum;
}

int multiplyRecurse(int a, int b)
{
    if (a == 0)
        return 0;
    return b + multiplyRecurse(a-1, b);
}
