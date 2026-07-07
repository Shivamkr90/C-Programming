//Program: when user give odd no. then program end & if don't give odd no. program is continue.

#include <stdio.h>

int main()
{
    int n;
    do
    {
        printf("Enter no. :");
        scanf("%d", &n);
        printf("%d\n", n);

        if (n % 2 != 0)
        {
            break;
        }
    } while (1);
    printf("That's odd no.\nThank you.");

    return 0;
}