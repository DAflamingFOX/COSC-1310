#include <stdio.h>

int main()
{
    float balance = 1000;
    const float rate = .05;

    for(int i = 1; i <= 10; i++)
    {
        balance = (1 + rate) * balance;
        printf("Balance at end of year %d: %.2f\n", i, balance);
    }

    return 0;
}
