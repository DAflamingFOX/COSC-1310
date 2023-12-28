#include <stdio.h>

int main()
{
    FILE *file;
    file = fopen("data01.txt", "w");

    if (file == NULL)
    {
        printf("error opening file!");
        exit(1);
    }

    for(int i = 1; i <= 100; i++)
        fprintf(file, "%f\n", i+0.5);

    fclose(file);


    float arr[100];

    file = fopen("data01.txt", "r");

    if (file == NULL)
    {
        printf("error opening file!");
        exit(1);
    }

    for(int i = 0; i < 100; i++)
    {
        fscanf(file, "%f\n", &arr[i]);
    }

    float sum = 0;

    for(int i = 0; i < 100; i++)
        sum += arr[i];


    printf("Avg of elements: %f", (sum / 100.0));

    return 0;
}
