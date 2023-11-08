#include <stdio.h>

int main()
{
    float spfp;
    printf("Enter a value:\n");
    scanf("%f", &spfp);
    printf("\nThe value entered was: %f\n", spfp);

    if(spfp > 0)
        printf("Positive!\n");
    else if (spfp < 0)
        printf("Negative!\n");
    else
        printf("Zero!\n");

}
