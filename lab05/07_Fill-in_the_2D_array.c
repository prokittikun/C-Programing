#include <stdio.h>

int main()
{
    int n = 0, i, j;
    printf("Enter the number of rows or columns: ");
    scanf("%d", &n);
    int a[n][n];
    for (int r = 0; r < n; r++)
    {
        for (int i = 0; i < n; i++)
        {
            a[r][i] = i + 1 + r;
        }
    }

    for (int r = 0; r < n; r++)
    {
        for (int i = 0; i < n; i++)
        {
            printf("%2d ", a[r][i]);
        }
        printf("\n");
    }
    return 0;
}
