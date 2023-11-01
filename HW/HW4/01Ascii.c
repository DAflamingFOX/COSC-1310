#include <stdio.h>

int main()
{
    char letter;
    printf("Enter a letter:\n");
    scanf("%c", &letter);

    if (65 <= letter && letter <= 90)
        printf("This is an uppercase letter!");
    else if (97 <= letter && letter <= 122)
        printf("This is a lowercase letter!");
    else
        printf("This is not a letter!");

    return 0;
}
