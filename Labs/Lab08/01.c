#include <stdio.h>

int sumarrays(int[], int);

int main()
{
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("Sum of 1-10: %d", sumarrays(arr, 10));

    return 0;
}

int sumarrays(int arr[], int size)
{
    int sum = 0;
    for(int i = 0; i < size; i++)
        sum += arr[i];
    return sum;
}
