//Program: Count length of Array(name)

#include <stdio.h>

int countLen(char arr[])
{
    int count = 0;
    for (int i = 0; arr[i] != '\0'; i++)
    {
        count++;
    }

    return count - 1;
}

void printString(char arr[])
{
    for (int i = 0; arr[i] != '\0'; i++)
    {
        printf("%c", arr[i]);
    }

    printf("\n");
}

int main()
{
    char name[100];

    printf("Enter name:");
    fgets(name, 100, stdin);

    printf("Length is : %d", countLen(name));
    
    return 0;
}