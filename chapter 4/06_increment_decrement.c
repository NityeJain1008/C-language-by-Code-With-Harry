#include <stdio.h>

int main(){
    int i = 5 ; 
    printf("the value of i is %d\n", i) ; //5

    i =  i+5 ;
    printf("the value of i is %d\n", i) ; //10
    
    printf("the value of i is %d\n", i++) ; //10

    printf("the value of i is %d\n", i) ; //11

    printf("the value of i is %d\n", ++i) ; //12

    i+=2; // i = i + 2
    printf("the value of i is %d", i) ; //14
    
    return 0;
}