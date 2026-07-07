// W,A.P. to check Armstrong no.

#include <stdio.h>
int main(){
    int n, a,b,c,sum;
    printf("Enter No.:");
    scanf("%d", &n);

    a= n/100;
    b= (n/10)%10;
    c= n%10;
    sum = (a*a*a) + (b*b*b) + (c*c*c);

    if(sum == n){
        printf("Armstrong number.");
    }
    else{
        printf("Not a Armstrong no.!");
    }
    return 0;
}
