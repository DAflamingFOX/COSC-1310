#include <stdio.h>

int main()
{
    const initBal = 1000;
    float balance = initBal;
    const float rate = .05;

    int i = 0;
    while (balance < 2*initBal)
    {
        i++;
        balance = (1 + rate) * balance;
    }
    printf("Balance at end of year %d: %.2f\n", i, balance);


    return 0;
}
