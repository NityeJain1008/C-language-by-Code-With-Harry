#include <stdio.h>

int main(){
    int a ; 
    printf("entre your age :") ;
    scanf("%d", &a) ;

    if(a>18)
    {
        printf("you are valid") ;
    } else
    {
        printf("your age is not greater than 18") ;
    }
    
    return 0;
}