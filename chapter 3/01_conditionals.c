#include <stdio.h>

int main(){
    
    int a ; 
    printf("entre your age :") ;
    scanf("%d", &a) ;

    if(a>18)
    {
        printf("you are valid") ;
    }
    
    if (a%5==0)
    {
        printf("your age is divisible by 5") ;
    }
    
    return 0;
}