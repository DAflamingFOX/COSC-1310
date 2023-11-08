#include <stdio.h>

int words(char *);

int main()
{
    char name[] = "He said howdy to all";
    printf("%d\n", words(name));

    return 0;
}

int words(char *str)
{
    int w = 1;

    while (*str != NULL)
    {
        if (*str == ' ')
            w++;
        str++;
    }

    return w;
}
