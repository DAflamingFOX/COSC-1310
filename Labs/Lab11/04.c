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
           stuRecs[0].lastName,
           stuRecs[0].firstInit,
           stuRecs[0].gpa,
           stuRecs[0].creditHours);
    printf("%s\t%c\t%3.2f\t%2d\n",
           stuRecs[1].lastName,
           stuRecs[1].firstInit,
           stuRecs[1].gpa,
           stuRecs[1].creditHours);
    printf("%s\t%c\t%3.2f\t%2d\n",
           stuRecs[99].lastName,
           stuRecs[99].firstInit,
           stuRecs[99].gpa,
           stuRecs[99].creditHours);
    return 0;
}
