//Program: function sum of 2no.

#include <stdio.h>

int sum(int a, int b);

int main(){
    int a, b, s;
    printf("Enter no.1 :");
    scanf("%d", &a);
    printf("Enter no.2 :");
    scanf("%d", &b);

    s = sum(a, b);
    printf("sum is :%d", s);

}
int sum(int a, int b){
    return a+b;
}