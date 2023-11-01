#include <stdio.h>

int main()
{


    int bar[3] = {20, 30, 40};
    int *p_bar = bar;



    //printf("%d\n", *p_bar);
    //printf("%d\n", *(p_bar+2));
    //printf("%p\n", p_bar);
    //printf("%p\n", p_bar++);
    printf("%p\n", bar++);
    //printf("%p\n", ++p_bar);
    //printf("%d\n", *p_bar++);

}
