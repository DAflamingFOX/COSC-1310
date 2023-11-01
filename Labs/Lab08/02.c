#include <stdio.h>

void revArr(int[], int[], int);

int main()
{
    int arr[8] = {1, 2, 3, 4, 5, 6, 7, 8};
    int rev[8] = {0};

    revArr(arr, rev, 8);

    printf(" i\tarr\trev\n");
    for(int i = 0; i < 8; i++)
        printf("% 2d\t% 2d\t% 2d\n", i, arr[i], rev[i]);

    return 0;
}

void revArr(int arr[], int rev[], int size)
{
    for(int i = 0; i < size; i++)
        rev[i] = arr[size-i-1];
}

