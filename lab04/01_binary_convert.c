#include <stdio.h>
#include <stdlib.h>
int main()
{
    char digitTemp[10];
    fgets(digitTemp, 10, stdin);
    int digit = atoi(digitTemp);
    int ans = 0, p = 1;
    while (digit != 0)
    {
        int temp = digit % 2;
        ans += temp * p;
        p *= 10;
        digit = digit >> 1;
    }
    printf("Binary number of %d is %04d.", atoi(digitTemp), ans);
}