#include <stdio.h>

// 1 ,2 ,3 ,4 ,5 

int sum(int) ;

int sum(int n) {
    if (n == 1)
    {
        return 1 ;
    }
    
    return sum(n-1) + n ;
}


int main(){
    int n ;
    n = 4 ;
    printf("%d", sum(n)) ;
    return 0;
}