
#include <stdio.h>

int main()
{
    float mydata[4] = {1.1, 2.2, 3.3};

    mydata[3] = mydata[0] + mydata[1];

    for(int i = 0; i < 4; i++)
        if(mydata[i] > 2.5)
            printf("%6.2f", mydata[i]);

    return 0;
}
