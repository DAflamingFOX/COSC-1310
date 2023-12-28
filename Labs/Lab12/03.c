#include <stdio.h>

int main()
{
    int a, b;
    while(1)
    {
        printf("Enter two integers:\n");
        scanf("%d", &a);
        scanf("%d", &b);

        if (a + b == 0)
            break;
    }
    printf("The sum of the two integers was 0! %d + %d", a, b);
    return 0;
}
