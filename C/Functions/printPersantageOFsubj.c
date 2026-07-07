//Program: Calcuate Average persantege of 3-subjects


#include <stdio.h>

int calpersantage(int BCE, int SE, int AIML);

int main()
{
    int BCE = 97;
    int SE = 99;
    int AIML = 98;
    printf("persantage is :%d", calpersantage(BCE, SE, AIML));

    return 0;
}

int calpersantage(int BCE, int SE, int AIML)
{
    return ((BCE + SE + AIML) / 3);
}
