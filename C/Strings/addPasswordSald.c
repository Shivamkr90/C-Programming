// Program: Append salt "132" to the password

#include <stdio.h>
#include <string.h>

void salting(char passw[])
{
    char salt[100] = "132";
    char newPassw[200];

    strcpy(newPassw, passw);
    strcat(newPassw, salt);
    puts(newPassw);
}
int main()
{
    char passw[100];
    printf("Create Password :");
    scanf("%s", passw);
    salting(passw);

    return 0;
}