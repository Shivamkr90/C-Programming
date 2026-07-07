#include <stdio.h>
int main()
{

    int p = 1;
    for (int i = 1; i <= 3; i++)
    {
        for (int i = 1; i <= 3; i++)
        {
            printf("%d", p);
            p++;
        }
        printf("\n");
    }
    return 0;
}