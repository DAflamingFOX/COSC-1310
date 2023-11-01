#include <stdio.h>

int main()
{
    double d;

    printf("Enter a double:\n");
    scanf("%lf", &d);

    printf("%08lld", (long long int) d);

    return 0;
}
