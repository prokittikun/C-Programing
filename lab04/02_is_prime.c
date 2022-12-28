#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input[5];
    fgets(input, 5, stdin);

    int i, n;

    n = atoi(input);

    for (;;)
    {
        if (is_prime(i))
        {
            printf("%d is a prime number.\n", i);
        }
    }

    return 0;
}