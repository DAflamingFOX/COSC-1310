#include <stdio.h>

int main()
{
    for(int i = -10; i <= 10; i++)
    {
        if (i != 0 && i % 3 == 0)
            continue;
        printf("%3d", i);
    }
    return 0;
}
