#include <stdio.h>

int main()
{
    int i;

    printf("Enter an integer:\n");
    scanf("%d", &i);

    printf("%010d", (long long int) i);

    return 0;
}
