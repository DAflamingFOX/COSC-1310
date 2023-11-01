#include <stdio.h>

float fun(unsigned int);

const int initDep = 1000;
const float rate = .05;

float balance = initDep;

int main()
{
    printf("B(15) = %.2f\n", fun(15));

    return 0;
}

float fun(unsigned int years)
{
    if (years == 0)
        return balance;

    balance = (1 + rate) * balance;

    return fun(years-1);
}
