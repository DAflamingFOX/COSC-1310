#include <stdio.h>

int main()
{
    int seq[50];

    seq[0] = 1;

    for(int i = 1; i < 50; i++)
        seq[i] = seq[i-1] + 3;

    for(int i = 0; i < 50; i++)
        printf("%d ", seq[i]);

    return 0;
}
