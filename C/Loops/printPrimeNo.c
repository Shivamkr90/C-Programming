// print prime no. in range
#include <stdio.h>

int main()
{
    int start, end, i, j, count;

    printf("Enter first or end number for print Prime no.'s...\n");
    printf("First no.: ");
    scanf("%d", &start);

    printf("End no. :");
    scanf("%d", &end);

    printf("Prime no.'s are :\n");

    for (i = start; i <= end; i++)
    {
        count = 0;
        for (j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }
        if (count == 2)
        {
            printf("%d\n", i);
        }
    }
    return 0;
}