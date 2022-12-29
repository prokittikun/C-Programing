#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char line(int n, int c, int originalSize)
{
    for (int i = 0; i < (n * 2) - 2; i++)
    {
        printf("-");
    }
    int x = 0;
    for (int k = 96 + originalSize; k >= 98; k--)
    {
        if (x == (n * 2) - 2)
            break;
        printf("%c", k);
        x += 1;
        for (int j = 0; j < c; j++)
        {
            printf("-");
            break;
        }
    }
    printf("\n");
}

int main()
{
    char sizeStr[10];
    fgets(sizeStr, 10, stdin);
    int size = atoi(sizeStr);
    int originalSize = atoi(sizeStr);
    if (size > 0 && size <= 26)
    {
        for (int i = 2; i <= size; i + 2)
        {
            line(size, i, originalSize);
            size -= 1;
        }
    }
    else
    {
        printf("-");
    }

    return 0;
}
