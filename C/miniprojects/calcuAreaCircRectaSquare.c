// Program: Use function to calculate AreaSquare, CircleSquare & RectangleSquare.

#include <stdio.h>

float area(float a);
float circle(float r);
float rectangle(float l, float w);

int main()
{
    printf("For calculate Square of Area, Circle & Rectangle...\n");

    float a, r, l, w, rect;
    printf("Enter Area :");
    scanf("%f", &a);
    printf("Enter Circle Radious :");
    scanf("%f", &r);
    printf("Enter Rectangle Lenth & Wirth :\n");
    scanf("%f %f", &l, &w);

    a = area(a);
    r = circle(r);
    rect = rectangle(l, w);

    printf("Area is :%f\n", a);
    printf("circle is: %f\n", r);
    printf("Rectangle is : %f\n", rect);

    return 0;
}
float area(float a)
{
    return a * a;
}
float circle(float r)
{
    return 3.141 * r * r;
}
float rectangle(float l, float w)
{
    return l * w;
}