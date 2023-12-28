#include <stdio.h>

struct StudentRecords
{
    char *lastName;
    char firstInit;
    float gpa;
    int creditHours;
};

int main()
{
    struct StudentRecords stuRecs[100] = {};
    struct StudentRecords *structPtr;
    structPtr = stuRecs;

    stuRecs[0].lastName = "Doe";
    stuRecs[0].firstInit = 'J';
    stuRecs[0].gpa = 3.55;
    stuRecs[0].creditHours = 50;
    stuRecs[1].lastName = "Smith";
    stuRecs[1].firstInit = 'K';
    stuRecs[1].gpa = 2.80;
    stuRecs[1].creditHours = 60;
    stuRecs[99].lastName = "Aaaa";
    stuRecs[99].firstInit = 'B';
    stuRecs[99].gpa = 3.05;
    stuRecs[99].creditHours = 70;

    printf("%s\t%c\t%3.2f\t%2d\n",
           structPtr->lastName,
           structPtr->firstInit,
           structPtr->gpa,
           structPtr->creditHours);
    structPtr++;
    // structPtr = &stuRecs[1];
    printf("%s\t%c\t%3.2f\t%2d\n",
           structPtr->lastName,
           structPtr->firstInit,
           structPtr->gpa,
           structPtr->creditHours);

    return 0;
}
