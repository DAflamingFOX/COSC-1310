#include <stdio.h>

int main()
{
    float arr[8];

    arr[0] = 1.3;

    for(int i = 1; i < 8; i++)
        arr[i] = arr[i-1] + 1.17;

    for(int i = 0; i < 8; i++)
        printf("%.2f\n", arr[i]);

    return 0;
}
