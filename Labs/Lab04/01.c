#include <stdio.h>

int main()
{
    int salary;
    float tax;

    printf("Enter the salary:\n");
    scanf("%d", &salary);

    tax = salary > 450000 ? .3 : .25;

    printf("Your tax is %d%%.", (int) (tax * 100) );

    return 0;
}
