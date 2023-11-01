#include <stdio.h>

int main()
{
    int cubes[30];

    for(int i = 1; i <= 30; i++)
        cubes[i-1] = i*i*i;

    for(int i = 0; i < 30; i++)
        printf("%d ", cubes[i]);

    return 0;
}
