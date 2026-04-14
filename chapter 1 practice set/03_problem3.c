#include <stdio.h>

int main(){
    
    float a ; 
    printf("enter temperature in calcius\n") ;
    scanf("%f", &a) ; 
    printf("the temperature in farhenite is %f", (9.0/5.0)*a+32 ) ;

    return 0;
}