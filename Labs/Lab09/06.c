#include <stdio.h>

int main()
{
    char str[25] = {0};
    char *p = str;
    printf("Enter a string:\n");
    fgets(str, 25, stdin);

    for(int i = 0; i < 25; i++)
        printf("%c\n", *(p + i));

    return 0;
}
