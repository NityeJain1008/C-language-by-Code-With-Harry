#include <stdio.h>

int main(){
    int i = 45 ;
    int* j = &i ;
    int** k = &j ;

    printf("value of i is %d\n", i) ;
    printf("value of i is %d\n", *j) ;
    printf("value of i is %d\n", **(&j)) ;
    printf("value of i is %d\n", *(&i)) ;
    printf("value of j is %d\n", *k) ;
    printf("value of i is %d\n", i) ;

    return 0;
}