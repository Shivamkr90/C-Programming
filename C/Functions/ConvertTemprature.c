//Program: convert celsious into ferenhite


#include <stdio.h>
//create function
float celtofer(float celsious);

int main(){
    //function call
    float ferenhite = celtofer(37);

    printf("ferenhite is :%f", ferenhite);
}
//add function
float celtofer(float celsious){
    
    float ferenhite = (celsious * (9.0/5.0)) + 32;
    return ferenhite;
}
