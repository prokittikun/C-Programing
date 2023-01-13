#include <stdio.h>
#include <stdlib.h>

char showStair(int index, int step, int *current, int stairRow)
{
    printf("|-");
    if (step >= 0)
    {
        if ((*current + step) + 1 == index)
        {
            printf("0");
            *current += step;
        }
        else if ((*current) == index)
        {
            printf("^");
        }
        else
        {
            printf("-");
        }
    }
    else
    {
    }
    printf("-|");
}
int main()
{
    int stairRow;
    int step = 0;
    int current = 0;
    printf("Input number of stairs: ");
    scanf("%d", &stairRow);
    while (1)
    {
        int round = 1;
        printf("---- round %d ----\n", round);
        for (int r = stairRow - 1; r >= 0; r--)
        {
            showStair(r, step, &current, stairRow);
            printf("\n");
        }
        printf("Input step command: ");
        scanf("%d", &step);
        if (step == 0)
            break;
        round++;
    }
}