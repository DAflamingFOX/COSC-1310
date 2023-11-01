#include <stdio.h>

int main()
{
    int arr[100/5];

    for(int i = 5; i <= 100; i+=5)
        arr[(i/5) - 1] = i;

    int sum;
    int arrSize = sizeof(arr) / sizeof(int);
    for(int i = 0; i < arrSize; i++)
        sum += arr[i];

    printf("average: %f", (float) sum / arrSize);

    return 0;
}
