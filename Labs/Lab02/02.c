
#include <stdio.h>

// preprocessor constant
#define FOURTY_TWO 42

// symbolic constant
const int fourty_two_const = 42;

// non-constant variable
int fourty_two_var = 42;

int main()
{
    // literal constant
    printf("%d\n", 42);

    // preprocessor constant
    printf("%d\n", FOURTY_TWO);

    // symbolic constant
    printf("%d\n", fourty_two_const);

    // non-constant variable
    printf("%d\n", fourty_two_var);

    return 0;
}
