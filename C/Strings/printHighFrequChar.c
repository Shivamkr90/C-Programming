// Program: print high frequancy char with there count

#include <stdio.h>

int main()
{
    char str[100];
    int i, j, count;
    int maxFreq = 0;
    char maxChar;

    printf("Enter string :");
    scanf("%s", str);

    for (i = 0; str[i] != '\0'; i++)
    {
        count = 0;
        for (j = 0; str[j] != '\0'; j++)
        {
            if (str[i] == str[j])
            {
                count++;
            }
        }
        if (count > maxFreq)
        {
            maxFreq = count;
            maxChar = str[i];
        }
    }
    printf("Hightlite frequancy char = %c\n", maxChar);
    printf("Frequancy = %d", maxFreq);
    
    return 0;
}