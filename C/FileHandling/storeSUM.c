//Program: Sum of two no. to a file using fprintf().

#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("data.txt", "w");

    int a, b;

    printf("Enter a :");
    scanf("%d", &a);

    printf("Enter b :");
    scanf("%d", &b);

    fclose(fptr);

    fptr = fopen("data.txt", "w");
    fprintf(fptr, "%d", a + b);
    
    fclose(fptr);

    return 0;
}