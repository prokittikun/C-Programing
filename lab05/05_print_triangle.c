#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);
    for (int i = 1; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            if (j % 2 != 0)
            {
                printf("x");
            }
            else
            {
                printf("-");
            }
        }
        printf("\n");
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = n; j > i; j--)
        {
            if (n % 2 == 0)
            {
                if (j % 2 == 0)
                {
                    printf("-");
                }
                else
                {
                    printf("x");
                }
            }else{
               if (j % 2 == 0)
                {
                    printf("x");
                }
                else
                {
                    printf("-");
                } 
            }
        }
        printf("\n");
    }
}