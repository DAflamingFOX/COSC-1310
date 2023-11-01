#include <stdio.h>

int main()
{

    int foo[100] = {0};

    printf("%p\n", &foo[0]);
    printf("%p\n", &foo);
}
