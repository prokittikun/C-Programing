#include <stdio.h>
#include <stdlib.h>

int main()
{
    char input_a[20], input_b[20];
    fgets(input_a, 20, stdin);
    fgets(input_b, 20, stdin);
    long long a, b, gcd, lcm,aTemp,bTemp;
    a = atoll(input_a);
    b = atoll(input_b);
    aTemp = a;
    bTemp = b;
    long long r = a % b;
    while (r != 0)
    {
        a = b;
        b = r;
        r = a % b;
    }
    gcd = b;
    lcm = (aTemp * bTemp) / gcd;
    printf("GCD: %lld\n", gcd);
    printf("LCM: %lld\n", lcm);
    
}