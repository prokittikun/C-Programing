#include <stdio.h>
#include <stdlib.h>
#include <math.h>

char letterOut(int n, int size)
{
    printf("%c", n);
}

int main()
{
    char sizeStr[10];
    fgets(sizeStr, 10, stdin);
    int size = atoi(sizeStr);
    int size2 = atoi(sizeStr);
    int originalSize = atoi(sizeStr);
    if (size > 0 && size <= 26)
    {
        int letter = 96 + originalSize;
        int s;
        int r;
        for (int i = 0; i < originalSize; i++, size--)
        {
            for (s = 0; s < (size * 2) - 2; s++)
            {
                printf("-");
            }
            for (int j = s; j < (originalSize * 2) - 2; j++)
            {
                printf("*");
            }
            for (r = s; r <= (originalSize * 2) - 2; r++)
            {
                printf("*");
            }
            for (int e = 0; e < (size * 2) - 2; e++)
            {
                printf("-");
            }
            printf("\n");
        }
        
    }
    else
    {
        printf("-");
    }

    return 0;
}

/*
 int character = 96 + size;
        for (int i = 0; i < originalSize; i++)
        {
            for (int j = 0; j < (size * 2) - 2; j++)
            {
                if (j % 2 == 0)
                {
                    printf("a");
                    // printf("%c", character);
                    // character--;
                }
                else
                {
                    printf("-");
                }
            }
            printf("\n");
            size--;
        }*/