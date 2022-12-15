#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
    char size[3];
    printf("Welcome to My Pizza Shop!!\n");
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("Enter pizza size (1=s, 2=m, or 3=l): ");
    fgets(size, 3, stdin);
    int diameter = 0;
    if (atoi(size) == 1)
    {
        diameter = 10;
    }
    else if (atoi(size) == 2)
    {
        diameter = 16;
    }
    else if (atoi(size) == 3)
    {
        diameter = 20;
    }
    float extraCost = 0;
    printf("Extra pepperoni? (1=yes, 0=no): ");
    char pepperoni[4];
    fgets(pepperoni, 4, stdin);
    if (atoi(pepperoni) == 1)
    {
        extraCost += 0.5;
    }
    printf("Extra cheese? (1=yes, 0=no): ");
    char cheese[4];
    fgets(cheese, 4, stdin);
    if (atoi(cheese) == 1)
    {
        extraCost += 0.25;
    }
    printf("Extra mushroom? (1=yes, 0=no): ");
    char mushroom[4];
    fgets(mushroom, 4, stdin);
    if (atoi(mushroom) == 1)
    {
        extraCost += 0.30;
    }
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    float area = M_PI * pow(diameter, 2) / 4;
    float cost = 5 + (2 * area) + (extraCost * area);
    float price = 1.5 * cost;
    printf("Your order costs %.2f baht.\n", price);
    printf("Thank you.");
}