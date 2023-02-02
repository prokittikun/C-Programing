#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{

    int hour = 0;
    int minute = 0;
    char format[4];
    // while (1)
    // {
        printf("Enter a 12-hour time [eg. 12:34 am]: ");
        scanf("%d:%d %s", &hour, &minute, format);
        if (format[0] == 'p' || format[0] == 'P')
        {
            printf("Equivalent 24-hour time: %02d:%02d\n", hour+12 == 24 ? 12:hour+12, minute);
        }
        else
        {
            printf("Equivalent 24-hour time: %02d:%02d\n", hour + 12 == 24 ? 00 : hour, minute);
        }
    // }
}