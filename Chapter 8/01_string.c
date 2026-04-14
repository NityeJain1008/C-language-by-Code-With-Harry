#include <stdio.h>

int main(){
    
    char str[] = {'a', 'b', 'c', '\0'} ;
    char str1[] = "pqr" ;

    for (int i = 0; i < 3; i++)
    {
        printf("The character is %c\n", str[i]);
        printf("The character is %c\n", str1[i]);

    }
    
    return 0;
}