#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("04data.txt", "w");

    if (file == NULL)
    {
        printf("error opening file!");
        exit(1);
    }

    for(int i = 1; i <= 10; i++)
        fprintf(file, "%d ", i);

    fclose(file);


    int arr[10];

    file = fopen("04data.txt", "r");

    if (file == NULL)
    {
        printf("error opening file!");
        exit(1);
    }

    for(int i = 0; i < 10; i++)
    {
        fscanf(file, "%d ", &arr[i]);
    }

    int sum = 0;

    for(int i = 0; i < 10; i++)
        sum += arr[i];

    printf("Sum of elements: %d", sum);

    return 0;
}
