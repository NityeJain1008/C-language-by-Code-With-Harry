#include <stdio.h>

int main(){
    
    int s[3] = {1, 2, 3} ;

    int * ptr = s ;
    ptr = ptr + 3 ;

    printf("Value after 3 index is %d", *ptr) ;

    return 0; 
}