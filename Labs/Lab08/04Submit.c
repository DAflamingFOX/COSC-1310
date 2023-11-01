#include <stdio.h>

float arrProd(float[], int);

int main()
{
    float arr[] = {1.1, 2.2, 3.3, 4.4, 5.5};

    printf("Product of all elements is: %f", arrProd(arr, 5));

    return 0;
}


float arrProd(float arr[], int size)
{
    float product = 1.0;
    for(int i = 0; i < size; i++)
        product *= arr[i];

    return product;
}
