#include <stdio.h>

int main(){
    
    int a, b, c, d ;
    
    printf("enter radius of circle:\n") ;
    scanf("%d", &a) ;
    b = 3.14*a*a ;
    printf("the are of circle is %d \n", b ) ;
    
    printf("enter the height:\n") ;
    scanf("%d", &c) ;
    d = b*c ;
    printf("the volume of cylinder is %d \n", d) ;
    
    return 0;
}   