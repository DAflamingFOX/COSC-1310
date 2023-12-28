#include <stdio.h>

int main()
{

    printf("Enter an integer between 10 and 20 inclusively.\n");
    int num;
    scanf("%d", &num);
    switch(num)
    {
    case 10:
    case 11:
    case 12:
        printf("Small\n");
        break;
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
        printf("Medium\n");
        break;
    case 18:
    case 19:
    case 20:
        printf("Large\n");
        break;
    default:
        printf("Wrong input!\n");
        break;
    }


    return 0;
}
