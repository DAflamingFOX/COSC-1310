#include <stdio.h>

void recurseReverse(char *);

// 1. Make it to print the string backwards, not using loops
// 2. Answer the question from the teacher
int main()
{
    char *str = "Hello World!";
    puts(str);
    recurseReverse(str);

    printf("\n");

    char *str2 = "This is another string!";
    puts(str2);
    recurseReverse(str2);

    return 0;
}

void recurseReverse(char *charPtr)
{
    if (*charPtr != '\0')
    {
        recurseReverse(charPtr+1);
        printf("%c", *charPtr);
    }
}

