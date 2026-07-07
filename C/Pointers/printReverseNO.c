// program: reverse the input numbers.

#include <stdio.h>

void Reverse(int *ptr, int n)
{
    int i;
    for (i = n; i > 0; i--)
    {
        printf("%d\t", *(ptr + i));
    }
}
int main()
{
    int arr[5], i;
    printf("Enter 5 number's: ");

    for (i = 0; i <= 5; i++)
    {
        scanf("%d", &arr[i]);
    }

    Reverse(arr, 5);
    return 0;
}