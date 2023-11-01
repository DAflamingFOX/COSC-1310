#include <stdio.h>
#include <time.h>
#include <limits.h>

int main()
{

    double timeJeff, timeZarza;

    clock_t s, e;
    double cpuTime;

    int count = 0;

    printf("Starting search Jeff style\n\n");
    s = clock();
    for(int i = 4; i < 200000; i+=4)
        if (i % 6 == 0)
            count++;
    e = clock();
    printf("There are %d multiples\n\n", count);
    timeJeff = (double)(e-s) / CLOCKS_PER_SEC;
    printf("Jeff style finish: %f\n", timeJeff);

/*
    for(int i = 0; i <= 200000; i++)
        if ((i%6==0) && (i%4==0))
            printf("%d ", i);
*/
    return 0;
}
