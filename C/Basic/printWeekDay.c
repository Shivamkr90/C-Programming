//Program: print Week day's.

#include <stdio.h>

int main()
{
    int day;
    printf("enter 1-7:");
    scanf("%d", &day);

    switch (day)
    {
    case 1:
        printf("Monday.");
        break;
    case 2:
        printf("Tuesday.");
        break;
    case 3:
        printf("wensday");
        break;
    case 4:
        printf("thrusday.");
        break;
    case 5:
        printf("friday.");
        break;
    case 6:
        printf("satraday.");
        break;
    case 7:
        printf("Sunday.");
        break;

    default:
        printf(" not valid!");
    }
    return 0;
}