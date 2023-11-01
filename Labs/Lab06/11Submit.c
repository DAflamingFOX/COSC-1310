#include <stdio.h>

int main()
{
    for(int i = 3; i <= 36; i+=3)
        printf("%d ", i);

    printf("\n");

    for(int i = 36; i >= 1; i-=3)
        printf("%d ", i);

    return 0;
}
