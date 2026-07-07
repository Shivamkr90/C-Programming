// Print any 10 number's Table...

#include <stdio.h>
int main()
{
    int n[10], arr[10][9];
    int r, c;
    printf("enter 10 no. for Table :");
    for (int c = 0; c < 9; c++)
    {
        scanf("%d", &n[c]);
    }
    for (int r = 0; r < 10; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            arr[r][c] = n[c] * (r + 1);
        }
    }
    printf("Table is:\n");
    for (int r = 0; r < 10; r++)
    {
        for (int c = 0; c < 9; c++)
        {
            printf("%d\t", arr[r][c]);
        }
        printf("\n");
    }
    return 0;
}