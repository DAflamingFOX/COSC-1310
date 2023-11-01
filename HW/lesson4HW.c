#include <stdio.h>

void balls(int);

int main()
{
    for(int i = 2; i <= 4; i++)
        balls(i);
    return 0;
}

void balls(int n)
{
    for(int i = 1; i <= n; i++)
    {
        for(int j = 0; j < i; j++)
            printf("0");
        printf("\n");
    }
}
