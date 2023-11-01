#include <stdio.h>

int main()
{
    int id[10][10] = {0};

    // Setup anti-identity matrix of 1s
    for(int i = 0; i < 10; i++)
        id[10-i-1][i] = 1;


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
