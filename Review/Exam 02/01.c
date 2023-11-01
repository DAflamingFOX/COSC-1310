#include <stdio.h>

int main()
{
    for(int i = 100; i > 0; i--)
        if (i%7==0)
            printf("%d\n", i);
    printf("\n");

    int i = 100;
    while (i > 0)
    {
        if(i%7==0)
            printf("%d\n", i);
        i--;
    }
    printf("\n");

    i = 100;
    do
    {
        if(i%7==0)
            printf("%d\n", i);
        i--;
    } while (i > 0);


    return 0;
}
