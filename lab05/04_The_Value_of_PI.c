#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n = 0;
    printf("Enter n: ");
    scanf("%d", &n);

    double four = 4.0;
    double pi = 0.0;
    double divide = 1;
    for (int i = 1; i <= n; i++)
    {

        if (i % 2 == 0)
        {
            pi -= four / divide;
        }
        else
        {
            pi += four / divide;
        }
        divide += 2;
    }
    printf("%.10lf", pi);
}