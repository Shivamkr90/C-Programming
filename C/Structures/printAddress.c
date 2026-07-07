// Program: Store Address by Structure

#include <stdio.h>
typedef struct peopleaddress
{
    int houseNO;
    char city[100];
    char state[100];

} add;

void printaddr(add add)
{
    printf("\nYour address is:\n");
    printf("House no.: %d\n", add.houseNO);
    printf("City is: %s\n", add.city);
    printf("State is: %s\n", add.state);
    printf("_________________________________");
}

int main()
{
    add ads[1];

    printf("enter House no.: ");
    scanf("%d", &ads[0].houseNO);

    printf("enter city: ");
    scanf("%s", ads[0].city);

    printf("enter state: ");
    scanf("%s", ads[0].state);

    printaddr(ads[0]);

    return 0;
}