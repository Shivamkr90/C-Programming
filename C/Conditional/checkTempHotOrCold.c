//Program: check temprature hot or cold

#include <stdio.h>

void checkTemp(int temp);

int main()
{
    int temp;
    printf("Enter Temprature :");
    scanf("%d", &temp);

    checkTemp(temp);

    return 0;
}
void checkTemp(int temp)
{
    if (temp >= 30)
    {
        printf("Hot...");
    }
    else if (temp >= 20)
    {
        printf("Normal...");
    }
    else
    {
        printf("Cold...");
    }
}