#include <stdio.h>

void main()
{
    int score;
    printf("Enter the score:\n");
    scanf("%d", &score);

    char grade = 'F';
    if (score >=90)
        grade = 'A';
    else if (score >=80)
        grade = 'B';
    else if (score >= 70)
        grade = 'C';
    else if (score >= 60)
        grade = 'D';

    printf("The score %d, is letter grade %c.", score, grade);

}
