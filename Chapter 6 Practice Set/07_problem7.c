#include <stdio.h>

int mult_by(int ) ;

int mult_by(int x){
    x = 10 * x ;
    return x ;
}


int main(){
    
    int a ;
    printf("Enter the value of a : \n") ;
    scanf("%d", &a) ;
    
    printf("10 times a is %d", mult_by(a)) ;
    
    return 0;
}