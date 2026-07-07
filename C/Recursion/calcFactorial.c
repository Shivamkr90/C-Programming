//Program: print factorial of n by recursion
#include <stdio.h>

int factorial(int n);

int main()
{
    printf("factorial is :%d", factorial(2));

    return 0;
}

int factorial(int n)
{
    if (n == 1)
    {
        return 1;
    }
    int factorialofNMO = factorial(n - 1);
    int factorial = factorialofNMO * n;
    return factorial;
}