//Write a program to determine whether a student has passed or failed.
//To pass, a student requires a total of 40% and at least 33% in each subject.
//Assume there are three subjects and take the marks as input from the user. 


#include <stdio.h>

int main(){
    
    float a , b , c ;
    printf("enter marks of subject A:\n") ;
    scanf("%f", &a) ;
    
    printf("enter marks of subject B:\n") ;
    scanf("%f", &b) ;

    printf("enter marks of subject C:\n") ;
    scanf("%f", &c) ;
    
    float d ;
    d = (a + b + c)/3 ;

    if (d>=40 && a>=33 && b>=33 && c>=33) 
    {
        printf("congratulation !! you PASSED") ;
    }
    else
    {
        printf("you FAILED . better LUCK next time") ;
    }
    



    return 0;
}