#include <stdio.h>
#include <stdlib.h>

int arr[1000];

int main()
{
    for(int i = 0; i < 1000; i++)
        arr[i] = rand();

    int min = arr[0];
    int ind = 0;
    for (int i = 0; i < 1000; i++)
        if (arr[i] < min)
            min = arr[i], ind = i;

    printf("The minimum value stored in the array is %d: \n", min);
    printf("For fun, it is at index %d.", ind);

    return 0;
}
