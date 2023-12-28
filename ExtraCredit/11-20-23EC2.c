#include <stdio.h>

struct StudentGrades
{
    float grades[3];
    char name[20];
};

float calcAverage(struct StudentGrades);

int main()
{
    struct StudentGrades sg[3] =
    {
    {{90.4, 78.2, 86.3}, "Susan"},
    {{58.6, 82.4, 77.5}, "Pauline"},
    {{88.7, 94.1, 83.6}, "Joe"}
    };

    int index = 0;
    float tempAvg = 0.0, avg = 0.0;

    for (int i = 0; i < 3; i++)
    {
        tempAvg = calcAverage(sg[i]);
        if (tempAvg > avg)
        {
            avg = tempAvg;
            index = i;
        }
    }

    printf("%s - %3.2f", sg[index].name, avg);

    return 0;
}

float calcAverage(struct StudentGrades sg)
{
    float avg = 0.0;
    for (int j = 0; j < 3; j++)
        avg += sg.grades[j];
    avg /= 3;
    return avg;
}
