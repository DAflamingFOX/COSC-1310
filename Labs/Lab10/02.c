#include <stdio.h>

struct Data {
    int num;
    float a, b;
} info;


int main()
{
    struct Data info = {1, 2.3, 4.5};
    struct Data *infoPtr = &info;
    printf("%d, %f, %f\n", info.num, info.a, info.b);
    printf("%d, %f, %f\n", infoPtr->num, infoPtr->a, infoPtr->b);
    return 0;
}
