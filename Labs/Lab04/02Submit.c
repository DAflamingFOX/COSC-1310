#include <stdio.h>

int mystery(int, int);

int main()
{
    int i, j;

    i = 3, j = 4;

    printf("%d", mystery(i, j));

    return 0;
}

int mystery(int i, int j)
{
    if (i == 0)
        return j;
    else
        return mystery(i-1, j+1);
}
