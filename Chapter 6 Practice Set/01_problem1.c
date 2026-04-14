#include <stdio.h>

int main(){

    int a = 34 ; 
    int* b = &a ;

    printf("THe address of variable a is %d\n", &a) ;
    printf("THe address of variable a is %d\n", b) ;
    printf("THe value at address b is %d\n", *b) ;
    printf("THe value at address b is %d\n", *(&a)) ;

    return 0;
}