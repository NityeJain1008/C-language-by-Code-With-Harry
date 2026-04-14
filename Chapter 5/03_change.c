#include <stdio.h>

int sum(int, int) ;

int sum(int x, int y){
    return x+y ;
}



int main(){
    
    int c = sum(3, 4) ;
    printf("%d\n", c) ;

    int d = sum(1, 4) ;
    printf("%d\n", d) ;

    d = 2;
    printf("%d", d) ;
    
    
    return 0;


}