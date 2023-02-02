#include <stdio.h>

#define BOARD_SIZE 8

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos);

int main()
{
    int board[BOARD_SIZE][BOARD_SIZE] = {0};
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        for (int j = 0; j < BOARD_SIZE; j++)
        {
            board[i][j] = ' ';
        }
    }
    int numPieces = 0;
    scanf("%d", &numPieces);
    int x = 0, y = 0;
    char piece;
    for (int i = 0; i < numPieces; i++)
    {
        scanf("\n%c(%d, %d)", &piece, &x, &y);
        setPieceOnTable(board, piece, x, y);
    }

    printf("------------------\n");
    printf("  ");
    for (int i = 0; i < BOARD_SIZE; i++)
    {
        printf("%d ", i);
    }
    printf("\n");
     for (int x = 0; x < BOARD_SIZE; x++)
    {
        printf("%d",x);
        for (int y = 0; y < BOARD_SIZE; y++)
        {
            printf("|%c", board[y][x]);
            if (y == BOARD_SIZE - 1) {
                printf("|");
            }
        }
        printf("\n");
    }
    return 0;
}

void setPieceOnTable(int board[][BOARD_SIZE], char piece, int xPos, int yPos)
{
    board[xPos][yPos] = piece;
}