#include <stdio.h>

typedef struct complex
{
    int real ;
    float img ;
};

int main(){
    
    struct complex c1, c2 ;

    c1.real = 1 ;
    c1.img = 5 ;

    float c ; 

    printf("%f\n", c1.img);
    

    return 0;
}