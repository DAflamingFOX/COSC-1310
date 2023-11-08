#include <stdio.h>

float average(float, float, float, float, float);

int main()
{
    // This would be easier with arrays
    printf("Enter 5 floats, one on each line:\n");
    float a, b, c, d, e;
    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);
    scanf("%f", &e);

    printf("the average is %f.\n", average(a, b, c, d, e));
}

float average(float a, float b, float c, float d, float e) {
    return (a + b + c + d + e) / 5.0;
}
