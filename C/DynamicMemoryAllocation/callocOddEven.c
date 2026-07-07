// Program: Dynamic memory allocation using calloc()

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int *odd, *even;
    odd = (int *)calloc(5, sizeof(int));
    even = (int *)calloc(5, sizeof(int));

    printf("Enter 5 odd no. :");

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &odd[i]);
    }

    printf("Enter 5 Even no. :");
    
    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &even[i]);
    }

    printf("\nYour Odd & Even no. is:\n");

    for (int i = 0; i < 5; i++)
    {
        printf("%d\t%d\n", odd[i], even[i]);
    }

    free(odd);
    free(even);

    return 0;
}