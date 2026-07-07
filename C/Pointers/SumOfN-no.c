// Program: calculate sum of n numbers

#include <stdio.h>

int main()
{
    int n, p[10], sum = 0;

    printf("\tAddition\n");

    printf("Enter range (how many total no. do you want to Sum) :");
    scanf("%d", &n);

    printf("Enter the %d Number's: \n", n);

    for (int i = 1; i <= n; i++)
    {
        scanf("%d", &p[i]);
        sum += p[i];
    }
    printf("The total no. addition is: %d", sum);

    return 0;
}