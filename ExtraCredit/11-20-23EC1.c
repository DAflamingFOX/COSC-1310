#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int numbers[10], *minP, *maxP;
    // just fill with random numbers for fun.
    srand(time(0));
    for (int i = 0; i < 10; i++)
    {
        numbers[i] = rand() % 100;
    }

    minP = numbers;
    maxP = numbers;

    for (int i = 0; i < 10; i++)
    {
        if (*minP > numbers[i])
            minP = &numbers[i];
        if (*maxP < numbers[i])
            maxP = &numbers[i];
    }

    for (int i = 0; i < 10; i++)
        printf("%d\t", numbers[i]);

    printf("\n");
    printf("minP: %p\t%d\n", minP, *minP);
    printf("maxP: %p\t%d\n", maxP, *maxP);

    return 0;
}
