#include <stdio.h>

float force(float) ;

float force(float a) {
    float g = 9.8 ;
    return a*g ;
}

int main(){
    
    float m ;
    
    printf("Enter the mass of the object:") ;
    scanf("%f", &m) ;

    printf("Force applied is : %f", force(m)) ;
    return 0;
}
