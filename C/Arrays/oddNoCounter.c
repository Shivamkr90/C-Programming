// Program: count odd no. by arr.

#include <stdio.h>

// add function
int printOdd(int arr[], int n)
{

    int count = 0;

    for (int i = 0; i < n; i++)
    {

        if (arr[i] % 2 != 0)
        {
            count++;
        }
    }
    return count;
}
int main()
{

    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    printf("total add no.= %d", printOdd(arr, 9));
    return 0;
}
*/