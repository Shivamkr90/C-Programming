// Check Alphabate's Upper-case or lower-case.

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter Alphabet:");
    scanf("%c", &ch);

    if (ch >= 'A' && ch <= 'Z')
    {
        printf("Upper-case.");
    }
    else if (ch >= 'a' && ch <= 'z')
    {
        printf("Lawer-Case");
    }
    else
    {
        printf("Not an alphabet!");
    }
    return 0;
}