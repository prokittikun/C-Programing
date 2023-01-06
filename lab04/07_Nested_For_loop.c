#include <stdio.h>
#include <stdlib.h>
char starStart(int n)
{
    for (int j = 0; j < n; j++)
    {
        printf("*");
    }
}
char starEnd(int n)
{
    for (int j = n; j < n+n; j++)
    {
        printf("*");
    }
}

int main()
{
    char nStr[10];
    fgets(nStr, 10, stdin);
    int n = atoi(nStr);
    int k = 1;
    int e = n;
    for (int i = 0; i < ((2 * n) - 1)/2; i++)
    {
        starStart(k);
        k += 1;
        printf("\n");
    }
    for (int i = 0; i < ((2 * n) - 1)/2; i++)
    {
        starEnd(e);
        e -= 1;
        printf("\n");
    }
    printf("*");
}