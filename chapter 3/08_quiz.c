//  write a program to find grade of a student given his marks based on below: 
//  90 – 100 => A 
//  80 – 90 => B 
//  70 – 80 => C 
//  60 – 70 => D 
//  50 – 60 => E 
//  <50        => F 


#include <stdio.h>

int main(){
    char grade ;
    int a ; 
    printf("enter your marks:") ;
    scanf("%d", &a) ;

    if (a<=100 && a>=90)
    {
        grade = 'A' ;
        printf("marks - %d, grade - %c", a, grade) ;
    }
    else if (a<=90 && a>=80)
    {
        grade = 'B' ;
        printf("marks - %d, grade - %c", a, grade) ;
    }
    else if (a<=80 && a>=70)
    {
        grade = 'C' ;
        printf("marks - %d, grade - %c", a, grade) ;
    }
    else if (a<=70 && a>=60)
    {
        grade = 'D' ;
        printf("marks - %d, grade - %c", a, grade) ;
    }
    else if (a<=60 && a>=50)
    {
        grade = 'E' ;
        printf("marks - %d, grade - %c", a, grade) ;
    }
    else
    {
        grade = 'F' ;
        printf("your grade is F") ;
    }
    
    return 0;
}