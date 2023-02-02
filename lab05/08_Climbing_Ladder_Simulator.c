#include <stdio.h>
#include <stdlib.h>

int main()
{
    int stairsHeight = 0;
    int step = 0;
    printf("Input number of stairs: ");
    scanf("%d", &stairsHeight);
    int current = stairsHeight;
    for (int i = 0; 1; i++)
    {
        printf("---- round %d ----\n", i + 1);
        printf("step = %d\n", step);
        for (int j = 1; j <= stairsHeight; j++)
        {
            printf("|-");
            if (j == (current + step - 1))
            {
                printf("^");
            }
            else if (j == (current + step))
            {
                printf("0");
            }
            else
            {
                printf("-");
            }
            printf("-|%d\n", j);
        }
        printf("Input step command: ");
        int newStep = 0;
        scanf("%d", &newStep);
        if (newStep == 0)
        {
            break;
        }
        else
        {
            step -= newStep;
        }
        // else if (current + step - newStep - 1 <= 0)
        // {
        //     step = 1;
        // }
        // else if (current + step - newStep - 1 > stairsHeight)
        // {
        //     step = step;
        // }

        // else if(current + step - 1 < 0)
        // {
        //     printf("You lose!\n");
        //     break;
        // }
    }
}