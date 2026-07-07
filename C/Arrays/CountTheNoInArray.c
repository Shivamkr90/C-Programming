// Program: enter array number's and count the specific no. (how many total numbers)

#include <stdio.h>

int main()
{

    //veriable Declare
    int n, x, count;

    //input Array Size
    printf("enter arr size (how many the total number's): ");
    scanf("%d", &n);

    //input array numbers
    printf("Enter the array number's: ");
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    //input the count number
    printf("Enter the no. that's you want to count: ");
    scanf("%d", &x);

    //count the number
    count = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == x)
        {
            count++;
        }
    }

    //print the counter number
    printf("count (Total no. is):%d ", count);

    return 0;
}