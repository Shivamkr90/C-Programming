//Program: print 1-n odd number's.


#include <stdio.h>

int main(){

    int n;
    printf("Enter n (for print odd no.'s): ");
    scanf("%d", &n);

    for(int i=1; i<=n; i++){
        if(i%2 == 0){
            continue;
        }
        printf("The odd no.'s is: %d\n", i);
    }
    return 0;
}