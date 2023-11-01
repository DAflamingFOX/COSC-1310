#include <stdio.h>

int main()
{
    int mat[10][10] = {0};

    /*
    for(int i = 0; i < 10; i++)
        for(int j = 0; j < 10; j++)
            mat[i][j] = 1+ j + (10 * i);
    */

    for(int i = 0; i < 100; i++)
        mat[i/10][i%10] = i+1;

    /*
    for(int i = 0; i < 10; i++)
    {
        for(int j = 0; j < 10; j++)
        {
            printf("% 4d ", mat[i][j]);
        }
        printf("\n\n");
    }
    */

    for (int i = 0; i < 100; i++)
        printf("% 4d %s", mat[i/10][i%10], ((i+1)%10 == 0)?"\n\n":"");

    return 0;
}
