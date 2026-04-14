#include <stdio.h>

int function(int* ) ;

int function(int* i){
    return *i ;
}
int main(){
    int i = 45 ; 
    int* j = &i ;

    printf("The address of i is %d\n", &i) ;

    printf("value is %d\n", function(i)) ;
    return 0;
}