#include <stdio.h>
#include <math.h>

int main()
{
    float sqrRts[50];

    for(int i = 0; i < 50; i++)
        sqrRts[i] = sqrt(i+1);

    int k;
    printf("Please enter number of elements to print on each line:\n");
    scanf("%d", &k);

    for(int i = 0; i < 50; i++)
        printf("%.3f%c", sqrRts[i], ((i+1)%k == 0) ? '\n' : ' ');

    return 0;
}

