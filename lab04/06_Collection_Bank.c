#include <stdio.h>
#include <stdlib.h>

int main()
{
    char goalStr[10];
    printf("Enter your goal amount: ");
    fgets(goalStr, 10, stdin);
    char moneyStr[10];
    float collected = 0.00;
    float goal = atof(goalStr);
    float goalTemp = atof(goalStr);
    int i = 1;
    while (1)
    {
        printf("Enter money collected today: ");
        fgets(moneyStr, 10, stdin);
        float money = atof(moneyStr);
        collected += money;
        if (collected >= goalTemp)
        {
            if (i == 1)
            {
                printf("Congratulations! You take 1 day to reach your goal.");
            }
            else
            {
                printf("Congratulations! You take %d days to reach your goal.", i);
            }
            break;
        }
        goal -= money;
        printf("Total money collected up to day %d is %.2f. You need %.2f more.\n", i, collected, goal);
        i++;
    }

    return 0;
}