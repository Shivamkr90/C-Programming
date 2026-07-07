//program: Print Greater no. (a&b).

#include <stdio.h>

//add function function
void Greter(int *p1, int *p2)
{
    if (*p1 > *p2)
    {
        printf("Greter no. is = %d", *p1);
    }
    else if (*p2 > *p1)
    {
        printf("Greter no. is = %d", *p2);
    }
    else
    {
        printf("Equal no!");
    }
}
//main function
int main()
{
    int a, b;
    printf("Enter a & b :");
    scanf("%d %d", &a, &b);

    //function call
    Greter(&a, &b);
    
    return 0;
}