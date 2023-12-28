#include <stdio.h>

struct Data {
    int num;
    float a, b;
} info;

int *pInt;
float *pFloat1, *pFloat2;

int main()
{
    struct Data info = {1, 2.3, 4.5};
    struct Data *infoPtr = &info;

    pInt = &info.num;
    pFloat1 = &info.a;
    pFloat2 = &info.b;

    printf("%d, %f, %f\n", info.num, info.a, info.b);
    printf("%d, %f, %f\n", infoPtr->num, infoPtr->a, infoPtr->b);
    printf("%d, %f, %f\n", *pInt, *pFloat1, *pFloat2);
    return 0;
}

