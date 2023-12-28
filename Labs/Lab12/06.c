#include <stdio.h>

int main()
{
    for(int i = -20; i <= 20; i++)
    {
        if (i != 0 && (i % 3 == 0 || i % 5 == 0))
            continue;
        printf("%4d", i);
    }
    return 0;
}
