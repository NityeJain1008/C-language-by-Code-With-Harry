#include <stdio.h>

int main(){
    
    FILE *fptr ; 
    fptr = fopen("nitye.txt", "a")  ;

    char c = fgetc(fptr) ;
    printf("%c \n", c);
    
    int num = 456 ;

    fputc('c', fptr) ;

    fclose(fptr) ;

    return 0;
}