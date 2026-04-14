#include <stdio.h>

int sum(int * , int *) ;


int sum(int* a, int* b) {
    *a = 5 ;
    return *a + *b ;

}


int main(){
    
    int a = 4 ;
    int b = 7 ;
    printf("sum is %d", sum(&a ,&b)) ;
    printf("value of a is %d", a) ;
    return 0;
}