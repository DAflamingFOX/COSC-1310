
#include <stdio.h>

int x, y;

int main(void){

    for (x = 0; x < 10; x++, printf("\n")) {
        for (y = 0; y < x; y++)
            printf("X");
    }

    printf("\n");

    for (x = 0; x < 10; x++, printf("\n")) {
        for (y = 0; y < x; y++)
            printf("X");

        for (y = x; y < 10; y++)
            printf(".");
    }

    printf("\n");

    for (x = 0; x < 10; x++, printf("\n")) {
        for (y = 0; y < x; y++)
            printf("X");
        for(y=0; y<10; y++)
            printf(".");
        for(y=x; y<10;y++)
            printf("X");


    }

    return 0;
}
