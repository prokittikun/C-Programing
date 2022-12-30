#include <stdio.h>
#include <stdlib.h>
int convert(int n)
{
    int ans = 0, p = 1;
    int temp = n % 2;
    ans += temp * p;
    p *= 10;
    return n >> 1;
}
int main()
{
    char digitTemp[10];
    fgets(digitTemp, 10, stdin);
    int digit = atoi(digitTemp);

    printf("%d.", convert(digit));
}