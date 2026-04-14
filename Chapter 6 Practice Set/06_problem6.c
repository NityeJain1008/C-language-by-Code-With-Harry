#include <stdio.h>


int main(){
    
    int i = 7 ;
    int* j = &i ;
    int** k = &j ;

    printf("Address of i is %d\n", &i) ;
    printf("Address of j is %d\n", &j) ;
    printf("Address of k is %d\n", &k) ;
    printf("Value of i is %d\n", *j) ;
    printf("Value of i is %d", **k) ;

    return 0;
}