#include <stdio.h>

int main()
{
    int mat[10][10] = {0};

    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            mat[i][j] = j-i;

    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
            printf("% 4d", mat[i][j]);
        printf("\n\n");
    }

    return 0;
}
