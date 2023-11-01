#include <stdio.h>

int main()
{
    char response;
    printf("Do you have a job? y/n\n");
    scanf("%c", &response);

    int years;
    printf("How many years ago did you graduate?\n");
    scanf("%d", &years);

    if ((response == 'y' || response == 'Y') && years <= 3)
        printf("Great! You have access to those funds!");
    else
        printf("Sorry, You don't have access to those funds!");
}
