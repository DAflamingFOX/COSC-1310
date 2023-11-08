#include <stdio.h>

unsigned int sum(unsigned int);

int main()
{
    unsigned int n;
    printf("Enter the number to sum to:\n");
    scanf("%d", &n);

    printf("The sum of digits from 1 to %d is %d.\n", n, sum(n));
}

unsigned int sum(unsigned int n) {
    if (n == 0)
        return 0;
    else
        return n + sum(n-1);

}

