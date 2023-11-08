#include <stdio.h>

int main()
{
    char c, b[] = {'h', 'e', 'l', 'l', 'o'};
    int j = sizeof(b);

    printf("%d", j);

    c = b[j-2];
    *(b+j-1) = 5;
    //*(b+j) = 'W';
    //*b + j = 45.1;
    //b+=1;

    return 0;
}
