#include <stdio.h>
#include <math.h>

int main()
{
    float sqrRts[50];

    for(int i = 0; i < 50; i++)
        sqrRts[i] = sqrt(i+1);

    for(int i = 0; i < 50; i++)
        printf("%.3f%c", sqrRts[i], ((i+1)%10 == 0) ? '\n' : ' ');

    return 0;
}

