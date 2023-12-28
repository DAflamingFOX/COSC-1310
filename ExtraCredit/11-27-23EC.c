#include <stdio.h>

char s[] = "This is a test string. It contains two sentences.";

int main()
{
    int count = 0;
    printf("\nOriginal string: %s", s);

    while (s[count] != '\0')
    {
        if (s[count]=='.')
            s[count+1]='\0';
        count++;
    }
    printf("\nModified string: %s\n", s);
}
