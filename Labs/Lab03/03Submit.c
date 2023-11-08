#include <stdio.h>
#include <math.h>


#define PI 3.14159

float surfaceArea(float radius, float height);


int main()
{
    float radius, height;

    printf("Calculating the surface area of a right cone.\n");

    printf("Enter the radius:\n");
    scanf("%f", &radius);

    printf("Enter the height:\n");
    scanf("%f", &height);

    printf("The surface area is %.4f.", surfaceArea(2, 1.5));

    return 0;
}

float surfaceArea(float radius, float height) {
    return PI * radius * (radius + sqrt(pow(height, 2) + pow(radius, 2)));
}
