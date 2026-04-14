#include <stdio.h>

int sum(int a , int b) ;


int sum(int a, int b) {
    return a + b ;
}


int main(){
    
    int a = 4 ;
    int b = 7 ;
    printf("sum is %d", sum(a ,b)) ;
    
    return 0;
}