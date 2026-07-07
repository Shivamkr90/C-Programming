// Program: print oposite arry values.

#include <stdio.h>
//add function1.
int printarray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d\t", arr[i]);
    }
    printf("\n");
}
//add function2.
int reversearray(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        int firstvalue = arr[i];
        int lastvalue = arr[n - i - 1];

        arr[i] = lastvalue;
        arr[n - i - 1] = firstvalue;
    }
    printarray(arr, n);
}
//main function
int main()
{
    int arr[] = {1, 2, 3, 4, 5};

    //function call
    printarray(arr, 5);
    reversearray(arr, 5);

    return 0;
}