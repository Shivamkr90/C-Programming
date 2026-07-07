//Program: sum of 2 vector's using Structure

#include <stdio.h>

struct vector
{
    int x;
    int y;
};

void sumVector(struct vector v1, struct vector v2)
{
    struct vector sum;

    sum.x = v1.x + v2.x;
    sum.y = v1.y + v2.y;

    printf("sum of x is: %d\n", sum.x);
    printf("sum of y is: %d", sum.y);
}

int main()
{
    struct vector v1, v2;

    printf("Enter x & y of vector1.: ");
    scanf("%d %d", &v1.x, &v1.y);

    printf("enter x & y of vector2.: ");
    scanf("%d %d", &v2.x, &v2.y);

    sumVector(v1, v2);

    return 0;
}
