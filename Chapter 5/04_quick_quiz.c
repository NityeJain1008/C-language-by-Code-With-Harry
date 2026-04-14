#include <math.h>
#include <stdio.h>

int main()
{
    float b ;
    int a ;
    
    printf("Entre the length of side of square:") ;
    scanf("%d", &a);

    b = pow(a, 2) ;
    printf("The area of square is %f\n", b) ;

    return 0;
}