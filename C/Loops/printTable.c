// W.A.P. to print table:

#include <stdio.h>

int main(){
    int n;
    printf("enter No. :");
    scanf("%d", &n);
    printf("Table is :\n");

    for(int i=1; i<=10; i++) {
        printf("%d\n", n*i);
    }

    return 0;
}