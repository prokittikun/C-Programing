#include <stdio.h>

void resStair(int n, int start)
{
    for (int i = 0; i < n; ++i)
    {
        if (start == i)
        {
            printf("|-O-|\n");
        }
        else if (start + 1 == i)
        {
            printf("|-^-|\n");
        }
        else
        {
            printf("|---|\n");
        }
    }
}

int main()
{
    int n = 0;
    int stepTemp = 0;
    int i = 1;

    printf("Input number of stairs: ");
    scanf("%d", &n);
    int stepTemp = (n - 2);

    printf("---- round 1 ----\n");
    resStair(n, stepTemp);

    while (1)
    {
        printf("Input stepTemp command: ");
        scanf("%d", &stepTemp);
        if (stepTemp == 0)
        {
            break;
        }

        if (stepTemp - stepTemp < 0)
        {
            stepTemp = 0;
        }
        else if (stepTemp - stepTemp > (n - 2))
        {
            stepTemp = (n - 2);
        }
        else
        {
            stepTemp -= stepTemp;
        }

        printf("---- round %d ----\n", i + 1);
        resStair(n, stepTemp);
        i++;
    }
}