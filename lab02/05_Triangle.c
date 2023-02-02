#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a1[3], b1[3], c1[3];
    printf("Enter length of side A: ");
    fgets(a1, 3, stdin);
    printf("Enter length of side B: ");
    fgets(b1, 3, stdin);
    printf("Enter length of side C: ");
    fgets(c1, 3, stdin);
    int a = atoi(a1);
    int b = atoi(b1);
    int c = atoi(c1);

    if ((((a + b) <= c) || (a + c) <= b || (b + c) <= a) || (a <= 0 || b <= 0 || c <= 0))
    {
        printf("Triangle type is invalid.");
    }
    else if (a == b && a == c && b == c)
    {
        printf("Triangle type is equilateral.");
    }
    else if ((a == b) && (a != c) || (a == c) && (a != b) || (b == c) && (b != a))
    {
        printf("Triangle type is isosceles.");
    }
    else if (a != b && a != c && b != c)
    {
        printf("Triangle type is scalene.");
    }
}