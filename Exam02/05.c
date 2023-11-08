#include <stdio.h>

void printMat(int height, int width, int mat[height][width]);

int main()
{
    int mat[8][8];

    for (int i = 0; i < 8; i++)
        for (int j = 0; j < 8; j++)
            if (j == (8-i-1))
                mat[i][j] = (i%2==0) ? 3:4;
            else
                mat[i][j] = 2;

    printMat(8, 8, mat);

    return 0;
}

void printMat(int height, int width, int mat[height][width])
{
    for(int i = 0; i < height; i++)
    {
        for(int j = 0; j < width; j++)
            printf("%4d", mat[i][j]);
        printf("\n\n");
    }
}
