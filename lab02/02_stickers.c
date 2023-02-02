#include <stdio.h>
#include <stdlib.h>

int main()
{
    char stampChar[10], priceTmp[10];
    fgets(stampChar, 10, stdin);
    int stamp = atoi(stampChar);
    int stampDel = 0;
    int percent = 0;
    fgets(priceTmp, 10, stdin);
    double price = atof(priceTmp);
    if (stamp == 0 && price == 0)
    {
        percent = 0;
    }
    else if (stamp == 1)
    {
        percent = 10;
        stampDel = 1;
    }
    else if (stamp == 2)
    {
        percent = 15;
        stampDel = 2;
    }
    else if (stamp >= 3 && stamp <= 5)
    {
        percent = 20;
        stampDel = 3;
    }
    else if (stamp >= 6 && stamp <= 8)
    {
        percent = 30;
        stampDel = 6;
    }
    else if (stamp >= 9)
    {
        percent = 40;
        stampDel = 9;
    }
    printf("You get %d percents discount.\n", percent);
    printf("Total amount due is %0.2lf Baht.\n", price - ((price / 100) * percent));
    printf("And you have %d stickers left.", stamp - stampDel);
    return 0;
}