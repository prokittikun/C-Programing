#include <stdio.h>
#include <stdlib.h>
#include <math.h>
long checkAutomorphic(long nPow, long divide)
{
    int k = nPow % divide;
    return k;
}
int main()
{
    long int n = 0;
    printf("Input n = ");
    scanf("%ld", &n);
    long int nPow = pow(n, 2);
    printf("n^2 = %ld\n", nPow);
    long int p = 10;
    long int nPowTemp = n;
    while(1){
        long int x = nPowTemp % 10;
        nPowTemp = nPowTemp / 10;
        if (nPowTemp <= 0) break;
        p *= 10;
    }
    if (checkAutomorphic(nPow, p) == n)
    {
        printf("Yes. %ld is automorphic number.", n);
    }
    else
        printf("No. %ld is not automorphic number.", n);
}