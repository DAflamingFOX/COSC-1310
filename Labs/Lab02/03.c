#include <stdio.h>

int main()
{
    short s = -32767;
    printf("%hd\n", s);
    s--;
    printf("%hd\n", s);
    s--;
    printf("%hd\n", s);

    return 0;
}
