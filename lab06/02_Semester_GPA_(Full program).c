#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
    int numberSubject = 0;
    printf("Enter number of subject(s): ");
    scanf("%d", &numberSubject);
    int credit = 0;
    float sumCredit = 0.00;
    int score = 0;
    char grade;
    for (int i = 0; i < numberSubject; i++)
    {
        printf("Enter credit,grade for subject #%d: ", i + 1);
        scanf("%d,%c", &credit, &grade);
        if (grade == 'a' || grade == 'A')
        {
            score += 4 * credit;
            sumCredit += credit;
        }
        else if (grade == 'b' || grade == 'B')
        {
            score += 3 * credit;
            sumCredit += credit;
        }
        else if (grade == 'c' || grade == 'C')
        {
            score += 2 * credit;
            sumCredit += credit;
        }
        else if (grade == 'd' || grade == 'D')
        {
            score += 1 * credit;
            sumCredit += credit;
        }
        else if (grade == 'f' || grade == 'F')
        {
            sumCredit += credit;
        }
    }
    printf("GPA = %.2f", score/sumCredit);
}