#include <stdio.h>

float c2f(int c) ;

float c2f(int c) {
    return ((9/5.0)*c) + 32 ;
}

int main(){
    float a ;
    
    printf("Enter the celsius value:") ;
    scanf("%f", &a) ;

    printf("farhenite value is %f",c2f(a)) ;
    
    return 0;
}