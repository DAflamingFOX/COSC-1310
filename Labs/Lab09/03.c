#include <stdio.h>

int main()
{
    char str[] = "COSC-1310-510\n";

    printf("%s", str);

    char str2[] = {'C', 'O', 'S', 'C', '-','1', '3', '1', '0', '-', '5', '1', '0', '\n', '\0'};

    for(int i = 0; i < 15; i++)
        printf("%c", str2[i]);

    return 0;
}
