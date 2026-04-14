#include <stdio.h>

int main(){
    int a ; 
    printf("enter a :") ;
    scanf("%d", &a) ;

    switch (a)
    {
    case 1 :
        printf("you entered 1") ;
        break;
    case 2 :
        printf("you entered 2") ;
        break;
    case 3 :
        printf("you entered 3") ;
        break;
    case 4 :
        printf("you entered 4") ;
        break;
    default:
        printf("nothing matched");
        
    }
    return 0;
}