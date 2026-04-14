#include <stdio.h>

int main(){

    float p, r, t ;
    printf("enter principle;\n") ; 
    scanf("%f", &p) ;
    
    printf("enter rate;\n") ; 
    scanf("%f", &r) ;
    
    printf("enter time;\n") ; 
    scanf("%f", &t) ;

    printf("the interest is %f", (p*r*t)/100) ;

    return 0;
}