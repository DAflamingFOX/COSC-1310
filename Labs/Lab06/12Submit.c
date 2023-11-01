#include <stdio.h>

int main()
{
    int i = 36;
    do {
        printf("%d ", i);
    } while ((i-=3) > 0);

    return 0;
}
