#include <stdio.h>

int main(){
    
    char i = 'A' ;
    char* j = &i ;
    
    float k = 34 ; 
    float* k1 = &k ;
    
    printf("the addrss of i is %p\n", &i) ;
    printf("the addrss of i is %p\n", j) ;
    printf("the addrss of k is %f\n", k1) ;

    printf("value at address i is %d\n", *j) ;
    printf("value at address k is %d\n", *k1) ;
    
    return 0;

}