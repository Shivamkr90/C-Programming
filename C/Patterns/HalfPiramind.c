#include <stdio.h>

int main()
{
    int i, j;

    for (int i = 5; i >= 1; i--)
    {
        for (int j = 5; j >= 1; j--)
        {
            if (i <= 6 - j)
            {

                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}