#include <stdio.h>
#include <string.h>

char * concat(char *, char *);

int main()
{
    char *st1 = "Hello, ", *st2 = "World!", *stcat;

    stcat = concat(st1, st2);

    puts(stcat);

    free(stcat);

    return 0;
}

char * concat(char *st1, char *st2)
{
    char *cat, *p;

    cat = (char *) malloc((strlen(st1) + strlen(st2) + 1) * sizeof(char));

    if (cat == NULL)
        exit(1);

    p = cat;

    while (*st1 != '\0')
        *p++ = *st1++;
    while (*st2 != '\0')
        *p++ = *st2++;
    *p = '\0';

    return cat;
}
