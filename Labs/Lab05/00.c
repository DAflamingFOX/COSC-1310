#include <stdio.h>

double volumeSphere(double);

int main()
{
    double rad = 1.5;
    printf("Radius: %lf\tVolume:%lf", rad, volumeSphere(rad));
    return 0;
}

double volumeSphere(double rad)
{
    return 4.0 / 3.0 * 3.14159 * rad * rad * rad;
}
