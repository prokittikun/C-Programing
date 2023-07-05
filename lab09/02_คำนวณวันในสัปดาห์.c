#include <stdio.h>

typedef enum DayOfWeek
{
    SUN = 1,
    MON,
    TUE,
    WED,
    THU,
    FRI,
    SAT
} DayOfWeek;

DayOfWeek findDayOfWeek(int day, int month)
{
    //chatGPT code here
    
}

int main()
{
    int day, month;
    DayOfWeek dow;

    printf("Day:1 Month:1 of Year 2013 is Tuesday.\n");
    printf("Enter Day and Month: ");
    scanf("%d %d", &day, &month);
    dow = findDayOfWeek(day, month);
    printf("Day:%d Month:%d of Year 2013 is ", day, month);
    switch (dow)
    {
    case 1:
        printf("Sunday.\n");
        break;
    case 2:
        printf("Monday.\n");
        break;
    case 3:
        printf("Tuesday.\n");
        break;
    case 4:
        printf("Wednesday.\n");
        break;
    case 5:
        printf("Thursday.\n");
        break;
    case 6:
        printf("Friday.\n");
        break;
    case 7:
        printf("Saturday.\n");
        break;
    }
}