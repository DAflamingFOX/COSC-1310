#include <stdio.h>
#include <string.h>
#include <stdlib.h>

typedef union Name
{
    char *np;
    char na[20];
} Name_t;

Name_t person;

int main()
{
    printf("Enter name:\n");
    char temp[20];
    gets(temp);

    person.np = (char *) malloc(20 * sizeof(char));

    strcpy(person.np, temp);

    printf("Name:\t%s\n", person.np);
    free(person.np);

    strcpy(person.na, temp);
    printf("Name:\t%s\n", person.na);
    return 0;
}

