#include <stdio.h>

int main(){
    
    int marks[] = {1, 2, 3, 4} ;

    int * ptr = &marks[0] ;
    // int* ptr = marks ;

    printf("The value of ptr is %d\n", ptr) ;
    
    for (int i = 0; i < 4; i++)
    {
        printf("Value at index %d is %d\n", i, marks[i]) ;
        printf("Value at index %d is %d\n", i, *ptr) ;
        ptr++ ;
    }
    
    printf("The value of ptr is %d\n", ptr) ;
    return 0;
}

