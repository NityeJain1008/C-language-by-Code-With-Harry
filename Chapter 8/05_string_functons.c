#include <stdio.h>
#include <string.h>

int main(){
    
    char str[] = "Hello" ;
    char s1[56] = "Nitye" ;
    char s2[56] = " Bhai" ;

    printf("No. of characters are %d\n", strlen(str));
    
    char target[60] ;
    printf("%d\n",strlen(s1)) ;
    strcpy(target, str) ;
    strcat(s1, s2) ;

    printf("%s %s\n", str, target);
    printf("%s\n", s1);

    
    return 0;
}
