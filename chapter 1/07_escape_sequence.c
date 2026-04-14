#include <stdio.h>
int main() {
    
    int a ; 
    char ch = 'a';
    ch = 'c' ;
    ch = '\n' ;
    printf("hello \' world") ;

    // hello \' world ----> hello ' world 
    // hello \\ world ----> hello \ world 
    // hello \, world ----> hello , world 
    // hello \\n world ----> hello /n world 

    return 0;
}