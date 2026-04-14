#include <stdio.h>

int main(){
    int i = 72 ;
    int* j = &i ;
    printf("the addrss of i is %p\n", &i) ;
    printf("the addrss of i is %p\n", j) ;

    printf("value at address i is %d", *j) ;
    
    return 0;

}