#include <stdio.h>

int main()
{
    int evens[100];

    for (int i = 0; i < 200; i+=2)
        evens[i/2] = i;

    for (int i = 0; i < 10; i++)
        printf("%d ", evens[i]);
    printf("... ");
    for (int i = 100-10; i < 100; i++)
        printf("%d ", evens[i]);

    return 0;
}
