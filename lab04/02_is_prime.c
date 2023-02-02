#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int is_prime(int x)
{
    int multi = 0;
    for (int i = 1; i <= floor(sqrt(x)); i++)
    {
        if (x % i == 0)
        {
            multi += 1;
            if(multi > 1) return 0;
        }
        
    }
    // if (multi == 1)
        return 1;
    // else
    //     return 0;
}
int main()
{
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (i = 2; i <= n; i++)
    {
        if (is_prime(i))
        {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}