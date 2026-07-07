//Program: caculate 3-items price with gst.

#include <stdio.h>

int main()
{
    //initialitation
    float cost[3];

    //input
    printf("Enter 3-item's cost\n:");
    scanf("%f", &cost[0]);
    scanf("%f", &cost[1]);
    scanf("%f", &cost[2]);

    //calculate & print
    printf("1st-item total cost =%f\n", cost[0] + (0.18 * cost[0]));
    printf("2st-item total cost =%f\n", cost[1] + (0.18 * cost[1]));
    printf("3st-item total cost =%f\n", cost[2] + (0.18 * cost[2]));

    return 0;
}