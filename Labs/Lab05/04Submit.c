#include <stdio.h>

float fun(float);

int main()
{
    printf("A5 -> %f", fun(5));
    return 0;
}

float fun(float a)
{
    if (a == 0)
        return -1.0;
    if (a == 1)
        return 1.0;
    if (a == 2)
        return 0.5;

    return fun(a-2) * fun(a-3);

}
