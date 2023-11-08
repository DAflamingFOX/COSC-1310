#include <stdio.h>
#include <math.h>

int main()
{
    int i = 0;
    int var = 0;
    while((var = pow(2, i)) < 200)
    {
        i++;
        printf("%d\n", var);
    }

    return 0;
}
