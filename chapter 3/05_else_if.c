#include <stdio.h>

int main(){
    int age ;
    printf("enter your age :") ;
    scanf("%d", &age ) ;

    if (age>60)
    {
        printf("your age is %d hence you can drive - senior citizen", age) ;
    }
    else if (age>40)
    {
        printf("your age is %d hence you can drive - elder", age ) ;
    }
    else if (age>18)
    {
        printf("your age is %d hence you can drive", age) ;
    }
    else
    {
        printf("you cannot drive") ;
    }
    


    return 0;
}