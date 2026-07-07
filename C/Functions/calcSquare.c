// Program: calculate square.

#include <stdio.h>
#include <math.h>
//create function
int squareRoot(int base, int power);

int main()
{
    int base, power;
    printf("Enter Base :");
    scanf("%d", &base);
    printf("Enter power :");
    scanf("%d", &power);

    //function call
    printf("Square is :%d", squareRoot(base, power));

    return 0;
}
//add function
int squareRoot(int base, int power)
{
    if (power == 0)
    {
        return 1;
    }
    int square = base * pow(base, power - 1);

    return square;
}