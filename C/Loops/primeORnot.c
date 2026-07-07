//Program: check no. is prime or not

#include <stdio.h>
int main(){
    int n, i;
    printf("Enter no. :");
    scanf("%d", &n);

    for(i=2; i<n; i++){
        if(n%i == 0){
            printf("Not a prime no.!");
            return 0;
        }

    }
    printf("That's prime number.");
}