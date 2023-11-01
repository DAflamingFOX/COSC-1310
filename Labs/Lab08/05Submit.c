#include <stdio.h>

int main()
{
    int mat[11][11] = {0};

    // BL -> TR -1 diagonal
    for(int i = 0; i < 11; i++)
        mat[11-i-1][i] = -1;

    // TL -> BR count diagonal
    for(int i = 0; i < 11; i++)
        mat[i][i] = i+1;

    // Print matrix
    for(int i = 0; i < 11; i++)
    {
        for(int j = 0; j < 11; j++)
            printf("% 4d", mat[i][j]);
        printf("\n\n");
    }

    return 0;
}
