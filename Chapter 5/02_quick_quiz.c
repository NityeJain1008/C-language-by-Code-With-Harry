#include <stdio.h>

    void good_morning(); 
    void good_afternoon(); 
    void good_evening(); 
    
    void good_morning(){
        printf("good morning sir \n") ;
    }

    void good_afternoon(){
        printf("good afternoon sir\n") ;
    }

    void good_evening(){
        printf("good evening sir\n") ;
    }

int main(){
    good_morning();
    good_evening();
    good_afternoon();

    return 0;
}