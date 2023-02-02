#include <stdio.h>

int main()
{
    int i, a[5], b[5], c[10];
    printf("Enter array a:\n");
    for (i = 0; i < 5; i++)
    {
        printf("Please enter an integer: ");
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    printf("Enter array b:\n");
    for (int j = 0; j < 5; j++)
    {
        printf("Please enter an integer: ");
        scanf("%d", &b[i]);
        c[i+j] = b[i];
    }
    printf ("Array c: ");
    for (i = 0; i < 10; i++)
        printf("%d ", c[i]);

    printf("\n");
    return 0;
}