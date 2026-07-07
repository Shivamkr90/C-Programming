// print n term of fibonacci no.

#include <stdio.h>
//create function
int fibonacci(int n);

int main()
{
    //function call
    printf("%d", fibonacci(3 ));
    return 0;
}
//add function
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    if (n == 1)
    {
        return 1;
    }

    int fibonM1 = fibonacci(n - 1);
    int fibonM2 = fibonacci(n - 2);
    int fibonaccin = fibonM1 + fibonM2;

    return fibonaccin;
}