#include <stdio.h>
#include <string.h>


char * underscore(char *);

char input[257], *st;

int main()
{
    st = &input;

    printf("Enter a string:\n");

    gets(input);

    char *newst = underscore(st);
    puts(newst);
    free(newst);

    return 0;
}

char * underscore(char *st)
{
    char *newst, *p;
    newst = (char *) malloc((strlen(st) + 2) * sizeof(char));

    if (newst == NULL)
    {
        exit(1);
    }

    p = newst;

    while (*st != '\0')
        *(p++) = *(st++);

    *(p++) = '_';
    *p = '\0';

    return newst;
}
