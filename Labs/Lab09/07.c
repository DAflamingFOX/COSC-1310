#include <stdio.h>

int main()
{
    // mat is a pointer to int[6]*
    int mat[6][6] = {1, 1};
    // type cast mat to int * so that p is a pointer to ints.
    int *p = (int *) mat;

    // start p at 2
    p += 2;
    // iterate over i, increase p one place as well
    for(int i = 2; i < 36; i++, p++)
        // the value at p is equal to the sum of the previous 2 values in the array
        *p = *(p-2) + *(p-1);


    // print the array
    for(int i = 0; i < 6; i++)
    {
        for(int j = 0; j < 6; j++)
            printf("% 10d ", mat[i][j]);
        printf("\n\n");
    }




    return 0;
}
