// program: print Capital Alphabates.
#include <stdio.h>
void Alphabet(char *ptr)
{
    for (*ptr = 'A'; *ptr <= 'Z'; (*ptr)++)
    {
        printf("%c\n", *ptr);
    }
}
int main()
{
    char ch;

    Alphabet(&ch);
    return 0;
}