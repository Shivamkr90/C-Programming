//Program: Calculate sum, product, average by pointer(call by referance)

#include <stdio.h>
//create function
void calculate(int a, int b, int *sum, int *product, int *average);

int main()
{
    int a = 2, b = 3;
    int sum, product, average;
    //function call
    calculate(a, b, &sum, &product, &average);

    printf("sum = %d\nproduct = %d\naverage = %d\n", sum, product, average);
    return 0;
}
//create function
void calculate(int a, int b, int *sum, int *product, int *average)
{
    *sum = a + b;
    *product = a * b;
    *average = (a + b) / 2;
}
