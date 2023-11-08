#include <stdio.h>

int main()
{
    int x;
    printf("Please enter a value for x:\n");
    scanf("%d", &x);

    printf("%d %s\n", x,
           (x<50) ? "strictly less than 50." :
           (x <= 100) ? "between 50 and 100." :
           "strictly greater than 100.");

    return 0;
}
