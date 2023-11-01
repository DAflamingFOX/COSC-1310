#include <stdio.h>


int main()
{
    int a[4][5]={ {1, 2, 3}, {2}, {1, 2, 2, 2, 2}, {32, 23}};

    int i, j;

    printArr(a);

    for (i = 0; i < 4; i++)
        for(j = 0; j < 4; j++)
            a[i][j]=a[i][j+1]+i;

    printArr(a);

}

void printArr(int arr[][5])
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 0; j < 5; j++)
            printf("%d\t", arr[i][j]);
        printf("\n");
    }
    printf("\n");
}
