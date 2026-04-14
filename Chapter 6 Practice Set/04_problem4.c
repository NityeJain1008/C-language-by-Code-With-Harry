#include <stdio.h>

int sum(int* , int*) ;

int sum(int* a , int* b) {
    return *a + *b ;
}


int main(){

    int a ;
    int b ; 
    
    printf("enter the vale of a :\n") ;
    scanf("%d", &a) ;

    printf("enter the vale of b :\n") ;
    scanf("%d", &b) ;

    printf("Sum of a and b is %d", sum(&a, &b)) ;

    return 0;
}