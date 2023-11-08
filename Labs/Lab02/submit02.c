#include <stdio.h>

#define STUDENTS 14

int main()
{
    int patientAge = 8;
    const int numStudents = 12;
    double distance = 15.15;

    printf("The age of the patient is %d.\n", patientAge);
    printf("There are %d students.\n", numStudents);
    printf("We have %d students.\n", STUDENTS);
    printf("The distance is %lf.\n", distance);
    printf("The distance is %.2lf.\n", distance);
    return 0;
}
