#include <stdio.h>
#include <stdlib.h>

int main()
{
    char degitTemp[10];
    fgets(degitTemp, 10, stdin);
    int degit = atoi(degitTemp);
    int ans = 0, p = 1;
    while (degit != 0)
    {
        int temp = degit % 2;
        ans += temp * p;
        p *= 10;
        degit = degit >> 1;
    }
    printf("Binary number of %d is %04d.", atoi(degitTemp), ans);
}