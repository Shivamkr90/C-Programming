// Program: count vowel in char

#include <stdio.h>

int countVowel(char str[])
{
    int count = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    char str[100];
    printf("Enter Char :");
    fgets(str, 100, stdin);

    printf("Total vowel is :%d", countVowel(str));

    return 0;
}