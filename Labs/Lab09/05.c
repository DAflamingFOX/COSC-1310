#include <stdio.h>

int main()
{

    short bar[3] = {20, 30, 40};

    printf("%d\n", *bar);
    printf("%d\n", *(bar + 1));
    printf("%d\n", *bar + 2);

    return 0;
}
