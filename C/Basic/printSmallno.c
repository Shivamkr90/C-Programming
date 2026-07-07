// W.A.P. to print smallest no.

#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a, b;
    printf("Enter no.1:");
    scanf("%d", &a);
    printf("enter no.2:");
    scanf("%d", &b);

    printf("the smallest no. is: %d", ((a + b) - abs(a - b)) / 2);
}