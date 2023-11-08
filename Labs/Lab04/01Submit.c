#include <stdio.h>

double volume(double);

const double pi = 3.14159;

int main()
{
    double rad;
    printf("Enter the radius of the sphere:\n");
    scanf("%lf", &rad);

    printf("The volume of the sphere is %lf.\n", volume(rad));


    return 0;
}

double volume(double rad)
{
    return 4.0 / 3.0 * pi * rad * rad * rad;
}
