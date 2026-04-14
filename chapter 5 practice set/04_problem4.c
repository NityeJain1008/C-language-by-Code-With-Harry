#include <stdio.h>


int fibonacci(int) ; 

    int fibonacci(int n) {
        if (n == 1 || n == 2)
        {
            return n-1 ;
        }
        return fibonacci(n-1) + fibonacci(n-2);
    }


int main(){
    
    int n ;
    printf("Enter the nth number :") ;
    scanf("%d",&n) ;
    
    printf("nth element is : %d",fibonacci(n)) ;
    
    return 0;
}