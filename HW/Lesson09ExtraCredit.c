#include <stdio.h>

int main()
{
    int id[10][10] = {0};

    // Setup bi-diagonal matrix of 1s
    for(int i = 0; i < 10; i++)
    {
        id[i][i] = 1;
        if (i < 9)
            id[i][i+1] = 1;
    }


    // Print array
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("%d ", id[i][j]);

        }
        printf("\n");
    }

    return 0;
}
