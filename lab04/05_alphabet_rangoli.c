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
        int s;
        int r;
        for (int i = 0; i < originalSize; i++, size--)
        {
            int letter = 96 + originalSize;
            for (s = 0; s < (size * 2) - 2; s++)
            {
                printf("-");
            }
            for (int j = s; j <= ((originalSize * 2) - 2); j++)
            {
                if (j == ((originalSize * 2) - 2))
                {
                    printf("%c", letter);
                    break;
                }
                if (j % 2 == 0)
                {
                    printf("%c-", letter);
                    letter--;
                }
            }
            letter += 1;
            for (r = s; r < (originalSize * 2) - 2; r++)
            {
                if (r == ((originalSize * 2) - 2))
                {
                    printf("%c", letter);
                    break;
                }
                if (r % 2 == 0)
                {
                    printf("-%c", letter);
                    letter++;
                }
            }
            for (int e = 0; e < (size * 2) - 2; e++)
            {
                printf("-");
            }
            printf("\n");
        }
        int p = 2;
        for (int i = 0; i < originalSize - 1; i++, size2--)
        {
            int letter = 96 + originalSize;
            for (int x = 0; x < p; x++)
            {
                printf("-");
            }
            p += 2;
            for (int l = 0; l < (size2 * 2) - 3; l++)
            {
                if (l == ((originalSize * 2) - 2))
                {
                    printf("%c", letter);
                    break;
                }
                if (l % 2 == 0)
                {
                    printf("%c-", letter);
                    letter--;
                }
            }
            letter += 2;
            for (s = 0; s < (size2 * 2) - 4; s++)
            {
                if (s == ((size2 * 2) - 4))
                {
                    printf("%c", letter);
                    break;
                }
                if (s % 2 == 0)
                {
                    printf("%c-", letter);
                    letter++;
                }
            }
            for (int j = s; j < (originalSize * 2) - 3; j++)
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
