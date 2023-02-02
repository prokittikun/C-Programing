#include <stdio.h>
#define BOARD_SIZE 8

void bishopMoves(int x, int y)
{
    printf("  ");
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
    int xStart = x - y;
    if (xStart < 0)
    {
        xStart = -1 * xStart;
    }
    for (int r = 0; r < BOARD_SIZE; r++)
    {
        printf("------------------\n");
        printf("%d", r);
        for (int j = 0; j <= BOARD_SIZE; j++)
        {
            printf("|");
            if (r == y && j == x)
            {
                printf("B");
                xStart++;
            }
            else if ((x + r) - y < BOARD_SIZE && j == (x + r) - y)
            {
                printf("X");
                xStart++;
            }
            else if ((x + y) - r < BOARD_SIZE && (x + y) - r == j)
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    printf("------------------");
}

int main()
{
    int x, y;
    printf("Enter Bishop's X Y position: ");
    scanf("%d %d", &x, &y);
    bishopMoves(x, y);
}