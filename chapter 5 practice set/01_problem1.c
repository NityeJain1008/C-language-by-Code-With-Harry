#include <stdio.h>

float average(int x, int y, int z) ;

float average(int x , int y , int z){
    return (x+y+z)/3.0 ;
}

int main(){
    
    int a = 1 ;
    int b = 2 ;
    int c = 3 ;

    float p = average(a, b, c) ;
    printf("average is %f", p) ;
   
    return 0;
}