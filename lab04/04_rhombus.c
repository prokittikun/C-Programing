#include <stdio.h>
#include <stdlib.h>

int main()
{
    char xTemp[6], yTemp[6];
    int x = 0, y = 0;
    fgets(xTemp, 6, stdin);
    fgets(yTemp, 6, stdin);
    x = atoi(xTemp);
    y = atoi(yTemp);

    for (int i = 0; i < y; i++)
    {
        for (int j = 0; j < x; j++)
        {
            if (i == 0)
            {
                printf("*");
                if (j + 1 == x)
                {
                    printf("\n");
                }
            }
            else if (i == y - 1)
            {
                for (int e = 0; e < y - 1; e++)
                {
                    printf(" ");
                }
                for (int m = 0; m < x; m++)
                {
                    printf("*");
                }
                break;
            }
            else
            {
                for (int k = 0; k < i; k++)
                {
                    printf(" ");
                    if (k + 1 == i)
                    {
                        printf("*");
                    }
                }
                for (int l = 0; l < (x - 2); l++)
                {
                    printf(" ");
                    if (l + 1 == x - 2)
                    {
                        printf("*\n");
                    }
                }
                break;
            }
        }
    }
}