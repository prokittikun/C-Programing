#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    char sizeStr[10];
    fgets(sizeStr, 10, stdin);
    int size = atoi(sizeStr);
    if (size > 0 && size <= 26)
    {
        for (int i = 96 + size; i >= 98; i--)
        {
            printf("%c-", i);
        }
        printf("a");
        for (int j = 98; j < 97 + size; j++)
        {
            printf("-%c", j);
        }
    }
    else
    {
        printf("-");
    }
    return 0;
}